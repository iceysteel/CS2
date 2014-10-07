#include "CashRegister.h"
#include <iostream>
#include <string>
#include "Inventory.h"

CashRegister::CashRegister(Inventory *i, int size)
{
   itemNumber = -1;
   quantity = 0;
   // Create an array of inventory items.
   inventory = new Inventory [size];

   // Copy the array passed as i to the new
   // inventory item array.
   for(int count = 0; count < size; count++)
         inventory[count] = i[count];
}

CashRegister::~CashRegister()
{
    //dtor
}

Inventory CashRegister::getItemFromArray(Inventory *inventoryArray)
{

    //Inventory invent("Adjustable Wrench", 7.0, 10);

    cout << "Here's what we have in the store:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << i << " : " << inventoryArray[i].getItemName() << endl;
    }
    cout << "choose an item to purchase by entering its number" << endl;
    cin >> itemNumber;

    cout << "you chose the " << inventoryArray[itemNumber].getItemName() << endl;
    cout << "how many would you like?" << endl;
    cin >> quantity;

    return inventoryArray[itemNumber];
}

void CashRegister::ringUp(Inventory invent)
{

    double cost = invent.getCost();

    double unitPrice = cost + (cost * 0.3);
    cout << "unit price is: " << unitPrice << endl;

    double purchaseSubtotal = unitPrice * quantity;
    cout << "Purchase subtotal is: " << purchaseSubtotal << endl;

    double purchaseTotal = purchaseSubtotal + (purchaseSubtotal * .06);
    cout << "Total is: " << purchaseTotal << endl;



}
