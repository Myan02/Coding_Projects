#include <iostream>
#include "vending_machine.cpp"

using namespace std;

int main() {
	VendingMachine vender;
    int amountToPurchase, amountToRestock;

    cin >> amountToPurchase >> amountToRestock;

    vender.Purchase(amountToPurchase);
    vender.Restock(amountToRestock);

    vender.Report();

    return 0;
}