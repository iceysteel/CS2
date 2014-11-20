#ifndef Lab_14_List_h
#define Lab_14_List_h

#include <iostream>
using std::cout;

#include <new>
#include "ListNode.h"

template <typename NodeType>
class List
{
protected:
    ListNode <NodeType> *firstPtr;
    ListNode <NodeType> *lastPtr;
    ListNode <NodeType> *getNewNode (const NodeType &);
public:
    List();
    List (const List <NodeType> &);
    ~List();

    void insertAtFront (const NodeType &);
    void insertAtBack (const NodeType &);
    void insertInOrder (const NodeType &);
    bool removeFromFront (NodeType &);
    bool removeFromBack (NodeType &);
    bool isEmpty() const;
    void print() const;

    // Stack for 20.10 & 20.11

    void push (const NodeType &data)
    {
        insertAtFront(data);
    }

    bool pop (NodeType &data)
    {
        return removeFromFront (data);
    }

    bool isStackEmpty() const
    {
        return isEmpty();
    }

    void printStack() const
    {
        print();
    }
};

template <typename NodeType>
List <NodeType> :: List()
{
    firstPtr = lastPtr = 0;
}

template <typename NodeType>
List <NodeType> :: List (const List<NodeType> &copy)
{
    firstPtr = lastPtr = 0;
    ListNode <NodeType> *currentPtr = copy.firstPtr;
    while (currentPtr != 0)
    {
        insertAtBack (currentPtr->data);
        currentPtr = currentPtr->nextPtr;
    }
}

template <typename NodeType>
List <NodeType> :: ~List()
{
    if ( !isEmpty() )
    {
        ListNode <NodeType> *currentPtr = firstPtr;
        ListNode <NodeType> *tempPtr;

        while ( currentPtr != 0 )
        {
            tempPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
            delete tempPtr;
        }
    }
}

template <typename NodeType>
void List <NodeType> :: insertAtFront (const NodeType &value)
{
    ListNode <NodeType> *newPtr = getNewNode(value);
    if ( isEmpty() )
        firstPtr = lastPtr = newPtr;
    else
    {
        newPtr->nextPtr = firstPtr;
        firstPtr = newPtr;
    }
}

template <typename NodeType>
void List <NodeType> :: insertAtBack (const NodeType &value)
{
    ListNode <NodeType> *newPtr = getNewNode(value);
    if ( isEmpty() )
        firstPtr = lastPtr = newPtr;
    else
    {
        lastPtr->nextPtr = newPtr;
        lastPtr = newPtr;
    }

}

template <typename NodeType>
bool List <NodeType> :: removeFromFront (NodeType &value)
{
    if ( isEmpty() )
        return false;
    else
    {
        ListNode <NodeType> *tempPtr = firstPtr;
        if (firstPtr == lastPtr)
            firstPtr = lastPtr = 0;
        else
            firstPtr = firstPtr->nextPtr;
        value = tempPtr->data;
        delete tempPtr;
        return true;
    }
}

template <typename NodeType>
bool List <NodeType> :: removeFromBack (NodeType &value)
{
    if ( isEmpty() )
        return false;
    else
    {
        ListNode <NodeType> *tempPtr = firstPtr;
        if (firstPtr == lastPtr)
            firstPtr = lastPtr = 0;
        else
        {
            ListNode <NodeType> *currentPtr=firstPtr;
            while (currentPtr->nextPtr != lastPtr)
                currentPtr = currentPtr->nextPtr;
            lastPtr = currentPtr;
            currentPtr->nextPtr = 0;
        }
        value = tempPtr->data;
        delete tempPtr;
        return true;
    }
}

template <typename NodeType>
bool List <NodeType> :: isEmpty() const
{
    return firstPtr == 0;
}

template <typename NodeType>
ListNode <NodeType> *List <NodeType> :: getNewNode (const NodeType &value)
{
    ListNode <NodeType> *ptr = new ListNode <NodeType> (value);
    return ptr;
}

template <typename NodeType>
void List <NodeType> :: print() const
{
    if ( isEmpty() )
    {
        cout << "The list is empty!!! \n\n";
        return;
    }

    ListNode <NodeType> *currentPtr = firstPtr;
    cout << "The list is: ";
    while ( currentPtr != 0 )
    {
        cout << currentPtr->data << ' ';
        currentPtr = currentPtr->nextPtr;
    }

    cout << std::endl;
}

// 20.8 insert elements of a linked list in order

template <typename NodeType>
void List <NodeType> :: insertInOrder (const NodeType &value)
{
    if ( isEmpty() )
    {
        ListNode <NodeType> *newPtr = getNewNode (value);
        firstPtr = lastPtr = newPtr;
    }
    else
    {
        if (firstPtr->getData() > value)
            insertAtFront (value);
        else if (lastPtr->getData() < value)
            insertAtBack (value);
        else
        {
            ListNode <NodeType> *currentPtr = firstPtr->getNextPtr();
            ListNode <NodeType> *previousPtr = firstPtr;
            ListNode <NodeType> *newPtr = getNewNode (value);
            while (currentPtr != lastPtr && currentPtr->getData() < value)
            {
                previousPtr = currentPtr;
                currentPtr = currentPtr->getNextPtr();
            }
            previousPtr->setNextPtr (newPtr);
            newPtr->setNextPtr (currentPtr);
        }
    }
}


#endif
