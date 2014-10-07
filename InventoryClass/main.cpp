#include <iostream>
#include "Inventory.h"
#include <string>
#include "CashRegister.h"

using namespace std;

int main()
{

    const int NUM_ITEMS = 5;

    Inventory inventory[NUM_ITEMS] = {
             Inventory("Adjustable Wrench", 7.0, 10),
             Inventory("Screwdriver", 3.5, 20),
             Inventory("Pliers", 9.0, 35),
             Inventory("Ratchet", 10.0, 10),
             Inventory("Socket Wrench", 9.75, 7) };

   CashRegister reg(inventory, NUM_ITEMS);

   reg.ringUp(reg.getItemFromArray(inventory));


	return 0;
}
