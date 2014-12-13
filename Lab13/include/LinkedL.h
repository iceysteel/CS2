#include <iostream>
#include <iomanip>
using namespace std;

struct node
{
    int num;
    node*next;
};

bool isEmpty(node*head);
char menu();
void insertAsFirst(node*&head,node*&last, int num);
void insert(node*&head, node*&last, int num);
void remove(node*&head, node*&last);
void showList(node*current);
static void reverseL(struct node** head_ref);

bool isEmpty(node*head)
{
    if(head == NULL)
        return true;
    else
        return false;

}

char menu()
{

    char choice;
    cout <<" Menu\n";
    cout<<"1. Add item\n";
    cout<<"2. Remove item\n";
    cout<<"3. Show list\n";
    cout<<"4. Revers list\n";
    cout<<"5. Exit\n";

    cin>>choice;

    return choice;



}
void insertAsFirst(node*&head,node*&last, int num)
{
    node *temp = new node;
    temp->num =num;

    temp->next = NULL;
    head = temp;
    last = temp;

}
void insert(node*&head, node*&last, int num)  //add number at end of list
{
    if(isEmpty(head))
        insertAsFirst(head, last, num);
    else
    {
        node *temp = new node;
        temp->num =num;
        temp->next = NULL;
        last->next = temp;
        last = temp;

    }
}
void remove(node*&head, node*&last)
{
    if(isEmpty(head))
        cout<<"List is empty.\n";
    else if (head == last)
    {
        delete head;
        head == NULL;

        last == NULL;
    }
    else
    {
        node * temp = head;
        head = head->next;
        delete temp;

    }
}
void showList(node*current)
{
    if(isEmpty(current))
        cout<<" List is empty";
    else
    {
        cout<<"The list contains: \n";
        while(current != NULL)
        {
            cout << current->num<<endl;
            current = current->next;
        }

    }

}


static void reverseL(struct node** head)
{
    struct node* prev   = NULL;
    struct node* current = *head;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
