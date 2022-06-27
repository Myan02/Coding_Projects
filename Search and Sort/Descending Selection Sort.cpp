#include <iostream>
#include <vector>

using namespace std;

//sorts values in array
void SelectionSortDescendTrace(int numbers[], int numElements) 
{
   int max;
   int temp;
   int maxIndex;
   int i;
   int j;
   int count = 0;
   
   for (i = 0; i < numElements - 1; i++)
   {
      max = numbers[i];
      
      //Finds the max value of the vector
      for (j = count; j < numElements; j++)
      {
         if (numbers[j] > max)
         {
            max = numbers[j];   
            maxIndex = j;
         }
      }
      
      temp = numbers[i];
      numbers[i] = max;
      numbers[maxIndex] = temp;
      count++;
      maxIndex = count;
      
      //displays current sorted order
      for (j = 0; j < numElements; j++)
      {
          cout << numbers[j] << " ";
      }
      
      cout << endl;
   }
}

int main() {
   int input, i = 0;
   int numElements = 0;
   vector<int> initValues(numElements);
   
   //gets input from user, appends into a vector
   while (true)
   {
        cout << "input a value greater than 0, or -1 to quit: ";
        cin >> input;
        
        if (input == -1)
        {
            break;
        }
        else
        {
            numElements++;
            initValues.resize(numElements);
            initValues.at(i) = input;
            i++;
        }
   }
   
   //create an array
   int numbers[numElements];
   
   //append from vector to array 
   for (i = 0; i < numElements; i++)
   {
      numbers[i] = initValues.at(i);
   }

   SelectionSortDescendTrace(numbers, numElements);

   return 0;
}