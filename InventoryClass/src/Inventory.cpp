#include <iostream>
#include <string>
#include "Inventory.h"

using namespace std;


Inventory::Inventory()
{
	itemName = "";
	quantity = 0;
	cost = 0;
	totalCost = 0;
}
Inventory::Inventory(string name, double cos, int qua)
{
	itemName = name;
	cost = cos;
	quantity = qua;
	setTotalCost();
}


bool Inventory::setQuantity(int qua)
{
	if (qua >= 0){
		quantity = qua;
		setTotalCost();
		return true;
	}
	else
		return false;
}
bool Inventory::setCost(double cos)
{
	if (cos >= 0){
		cost = cos;
		setTotalCost();
		return true;
	}
	else
		return false;
}
void Inventory::setTotalCost()
{
	totalCost = quantity*cost;
}
string Inventory::getItemName()
{
	return itemName;
}
int Inventory::getQuantity()
{
	return quantity;
}
double Inventory::getCost()
{
	return cost;
}
double Inventory::getTotalCost()
{
	return totalCost;
}
