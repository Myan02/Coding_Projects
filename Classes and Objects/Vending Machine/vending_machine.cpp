#include <iostream>
#include <string>

#include "vending_machine.h"
using namespace std;


VendingMachine::VendingMachine() {
	bottles = 20;
}

void VendingMachine::Purchase(int amount) {
	bottles = bottles - amount;
}

int VendingMachine::GetInventory() {
	return bottles;
}

void VendingMachine::Restock(int amount) {
	bottles = bottles + amount;
}

void VendingMachine::Report() {
	cout << "Inventory: " << bottles << " bottles" << endl;
}