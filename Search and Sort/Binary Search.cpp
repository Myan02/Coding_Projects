#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Read integers from input and store them in a vector.
// Return the vector.
vector<int> ReadIntegers() 
{
   int size;
   cin >> size;
   vector<int> integers(size);

   for (int i = 0; i < size; ++i)   // Read the numbers
    {               
      cin >> integers.at(i);
    }

   sort(integers.begin(), integers.end());
   return integers;
}

int BinarySearch(int target, vector<int> integers, int lower, int upper, int& recursions, int& comparisons) 
{
   int midpoint;

   midpoint = (lower + upper) / 2;          //get the midpoint of current vector 
   if (target == integers.at(midpoint))     //checks to see if target value is at the midppoint (base case)
   {
        comparisons++;
        return midpoint;
   }
   else if (lower == upper)                 //if vector contains 1 or 0 elements
   {
        if (target == integers.at(lower))   //if so and it is the target, return that value
        {
            comparisons++;
            return lower;
        }
        else                                //if target doesn't exist in vector
        {
            comparisons++;
            return -1;
        }
   }
   else
   {
        comparisons++;                      //comparison goes up even if target is not at midpoint
   }

   if (target < integers.at(midpoint))      //return the result of another binary search for the lower half of the vector
   {
        recursions++;
        comparisons++;
        return BinarySearch(target, integers, lower, midpoint - 1, recursions, comparisons);
   } 
   else if (target > integers.at(midpoint)) //return the result of another binary search for the lower half of the vector
   {
        recursions++;
        comparisons++;
        return BinarySearch(target, integers, midpoint + 1, upper, recursions, comparisons);
   }

    return -1;
}

int main()
{
   int target;  // value to search for
   int index;   //index of the value sarched for 

   int recursions = 1;  //number of times binary search is called (starts at 1 since it's called once in main)
   int comparisons = 0; //number of times target is compared to another element in the integers vector

   vector<int> integers = ReadIntegers();   //get integers into the vector (user input)

   cin >> target;

   index = BinarySearch(target, integers, 0, integers.size() - 1, recursions, comparisons); //get the index of target
   
   printf("index: %d, recursions: %d, comparisons: %d\n",   
          index, recursions, comparisons);  //prints target's index, number of times binary search is called, and number of comparisons

   return 0;
}
