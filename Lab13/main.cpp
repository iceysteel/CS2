#include <iostream>
#include <iomanip>
#include "LinkedL.h"
using namespace std;

int main ()
{
    node*head =NULL;
    node *last =NULL;
    char choice;
    int num;
    do{

        choice = menu();
        switch(choice)
        {
            case '1' :  cout<< "Please enter number: ";
                cin>> num;
                insert(head, last , num);
                break;
            case '2' :    remove(head, last);
                break;
            case '3' :    showList(head);
                break;
            case '4' :    reverseL(&head);
                break;

            default: cout<< "System exit\n";
        }
    }while(choice!='5');

    return 0;
}
