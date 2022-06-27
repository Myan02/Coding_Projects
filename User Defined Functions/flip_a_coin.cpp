#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string CoinFlip();

int main() 
{
   srand(2);  // Unique seed
   
   int numOfFlips;
   int i;
   
   cin >> numOfFlips;
   
   for (i = 0; i < numOfFlips; i++)
   {
      cout << CoinFlip() << endl;
   }

   return 0;
}

string CoinFlip()
{
   int random = rand() % 2;
   
   if (random == 0)
   {
      return "Tails";  
   }
   
   return "Heads";
}
