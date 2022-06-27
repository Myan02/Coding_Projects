#include <iostream>
using namespace std;

void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4);

int main() 
{
   int userVal1, userVal2, userVal3, userVal4;
   
   cin >> userVal1 >> userVal2 >> userVal3 >> userVal4;
   
   SwapValues(userVal1, userVal2, userVal3, userVal4);
   
   cout << userVal1 << " " << userVal2 << " " << userVal3 << " " << userVal4 << endl;

   return 0;
}

void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4)
{
   int temp1, temp2;
   
   temp1 = userVal1;
   userVal1 = userVal2;
   userVal2 = temp1;
   
   temp2 = userVal3;
   userVal3 = userVal4;
   userVal4 = temp2;
}