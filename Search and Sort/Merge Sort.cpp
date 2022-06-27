#include <iostream>
using namespace std;

// Create an array of size ints.
// Read size ints from cin, storing them in the array.
// Return the array.
int* ReadNums(int size) {
   int *nums = new int[size];                   // Create array
   for (int i = 0; i < size; ++i) {             // Read the numbers
      cin >> nums[i];
   }
   return nums;                                 // Return the array
}

// Output the numbers in nums, separated by spaces.
// No space or newline will be output before the first number or after the last.
void PrintNums(int nums[], int size) {
   for (int i = 0; i < size; ++i) {
      cout << nums[i];
      if (i < size - 1) {                       // No space after last number
         cout << " ";
      }
   }
   cout << endl;
}

void Merge(int numbers[], int i, int j, int k, int& comparisons) {
   int mergedSize;
   int mergePos;
   int leftPos;
   int rightPos;
   int* mergedNumbers = nullptr;

   mergePos = 0;
   mergedSize = k - i + 1;
   leftPos = i;
   rightPos = j + 1;
   mergedNumbers = new int[mergedSize];

   while (leftPos <= j && rightPos <= k) {
      comparisons++;
      
      if (numbers[leftPos] < numbers[rightPos]) {
         mergedNumbers[mergePos] = numbers[leftPos];
         ++leftPos;
      }
      else {
         mergedNumbers[mergePos] = numbers[rightPos];
         ++rightPos;
      }
      ++mergePos;
   }

   while (leftPos <= j) {
      mergedNumbers[mergePos] = numbers[leftPos];
      ++leftPos;
      ++mergePos;
   }

   while (rightPos <= k) {
      mergedNumbers[mergePos] = numbers[rightPos];
      ++rightPos;
      ++mergePos;
   }

   for (mergePos = 0; mergePos < mergedSize; ++mergePos) {
      numbers[i + mergePos] = mergedNumbers[mergePos];
   }
   delete[] mergedNumbers;
}

void MergeSort(int numbers[], int i, int k, int& comparisons) {
   int j;

   if (i < k) {
      j = (i + k) / 2;
      /* Trace output added to code in book */
      cout << i << " " << j << " | " << j + 1 << " " << k << endl;

      MergeSort(numbers, i, j, comparisons);
      MergeSort(numbers, j + 1, k, comparisons);

      Merge(numbers, i, j, k, comparisons);
   } 
}

int main() {
   int size;
   cin >> size;
   int* numbers = ReadNums(size);

   int comparisons = 0;

   cout << "unsorted: ";
   PrintNums(numbers, size);
   cout << endl;

   MergeSort(numbers, 0, size - 1, comparisons);

   cout << endl << "sorted:   ";
   PrintNums(numbers, size);

   cout << "comparisons: " << comparisons << endl;
   
   return 0;
}