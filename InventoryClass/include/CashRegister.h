#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include <string>
#include "Inventory.h"


class CashRegister
{
    public:
        CashRegister(Inventory *i, int size);
        void ringUp(Inventory invent);
        Inventory getItemFromArray(Inventory *inventoryArray);
        virtual ~CashRegister();
    protected:
    private:
        Inventory *inventory;
        int itemNumber;
        int quantity;


};

#endif // CASHREGISTER_H
