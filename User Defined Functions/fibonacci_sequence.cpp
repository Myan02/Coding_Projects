#include <iostream>
using namespace std;

int Fibonacci(int n);

int main() 
{
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}

int Fibonacci(int n)
{
   int i;
   int value1 = 0, value2 = 1, nextValue;

   for (i = 1; i < n; i++)
   {
      nextValue = value1 + value2;
      value1 = value2;
      value2 = nextValue;
   }
   
   if (n < 0)
   {
      return -1;
   }
   else if (n == 0)
   {
      return 0;
   }
   else if (n == 1)
   {
      return 1;
   }
   
   return nextValue;
}