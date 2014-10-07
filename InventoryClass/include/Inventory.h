#ifndef INVENTORY_H
#define INVENTORY_H
//#endif  INVENTORY_H
#include <iostream>
#include <string>
using namespace std;

class Inventory{
public:
	Inventory();
	Inventory(string, double, int);
	void Default();
	bool setQuantity(int);
	bool setCost(double);
	void setTotalCost();
    string getItemName();
	int getQuantity();
	double getCost();
	double getTotalCost();
private:
	string itemName;
	int quantity;
	double cost;
	double totalCost;

};

#endif
