#ifndef Lab_14_ListNode_h
#define Lab_14_ListNode_h

template <typename T> class List;

template <typename NodeType>
class ListNode
{
    friend class List <NodeType>;
private:
    NodeType data;
    ListNode *nextPtr;
public:
    ListNode (const NodeType &);
    NodeType getData() const;

    void setNextPtr (ListNode *nPtr)
    {
        nextPtr = nPtr;
    }

    ListNode *getNextPtr() const
    {
        return nextPtr;
    }
};

template <typename NodeType>
ListNode <NodeType> :: ListNode (const NodeType &info)
{
    data = info;
    nextPtr = 0;
}

template <typename NodeType>
NodeType ListNode <NodeType> :: getData() const
{
    return data;
}

#endif
