#include "linkedList.h"

class Stack
{
public:
    virtual bool isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
    virtual void top() = 0;
};

class LinkedListStack : public Stack
{
public:
    virtual bool isEmpty()
    {
        return S_list.isEmpty(); 
    }

    virtual void push(int data)
    {
       
        S_list.addToHead(data);
    }

    virtual int pop()
    {
        if(!isEmpty())
        std::cout << "The element poped out is: "; 
        return S_list.RemoveFromHead();
    }

    virtual void top()
    {
        if(!isEmpty())
        
        std::cout << "The Top element is: " << S_list.getFromHead() <<std::endl;
    }
private:
    LinkedList S_list;
};