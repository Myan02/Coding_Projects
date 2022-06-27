#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

void Car::SetPurchasePrice(int userPrice)
{
    purchasePrice = userPrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = (int) 
      round(purchasePrice * pow((1 - depreciationRate), carAge));
}

int Car::GetModelYear() const {
   return modelYear;
}

int Car::GetPurchasePrice() const
{
    return purchasePrice;
}

int Car::GetCurrentValue() const
{
    return currentValue;
}

void Car::PrintInfo() const
{
    cout << "Car's information:" << endl;
    cout << "  Model year: " << GetModelYear() << endl;
    cout << "  Purchase price: $" << GetPurchasePrice() << endl;
    cout << "  Current value: $" << GetCurrentValue() << endl;
}