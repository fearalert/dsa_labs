#include "linkedlist.h"

// class Queue{

// public:

//     virtual bool isEmpty() = 0;
//     virtual void enqueue(int data) = 0;
//     virtual int dequeue() = 0;
//     virtual void front() = 0;
//     virtual void rear() = 0;
// };

// class LinkedListQueue : public Queue{

// public:
//     virtual bool isEmpty()
//     {
//         return Qlist.isEmpty();
//     }

//     virtual void enqueue(int data)
//     {
//         return Qlist.addToTail(data);
//     }

//     virtual int dequeue()
//     {
//         if(!isEmpty())
//         std::cout << "The element dequeued is: "; 
//         return Qlist.RemoveFromHead();
//     }
//     virtual void front()
//     {
//         if(!isEmpty())
        
//         std::cout << "The front element is: " << Qlist.getFromHead() <<std::endl;
//     }
//     virtual void rear()
//     {
//         if(!isEmpty())
        
//         std::cout << "The rear element is: " << Qlist.getFromTail() <<std::endl;
//     }

// private:
//     LinkedList Qlist;
// };

#include "linkedList.h"

class Queue
{
public:
    virtual bool isEmpty() = 0;
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual void front() = 0;
    virtual void rear() = 0;
};

class LinkedListQueue : public Queue
{
public:
    virtual bool isEmpty()
    {
        return Q_list.isEmpty(); 
    }

    virtual void enqueue(int data)
    {
       
        Q_list.addToTail(data);
    }

    virtual int dequeue()
    {
        if(!isEmpty())
        std::cout << "The element dequeued is: "; 
        return Q_list.RemoveFromHead();
    }

    virtual void front()
    {
        if(!isEmpty())
        
        std::cout << "The front element is: " << Q_list.getFromHead() <<std::endl;
    }

    virtual void rear()
    {
        if(!isEmpty())
        
        std::cout << "The rear element is: " << Q_list.getFromTail() <<std::endl;
    }
private:
    LinkedList Q_list;
};