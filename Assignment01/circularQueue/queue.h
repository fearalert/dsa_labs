#include <iostream>

class Cqueue{
public:
    Cqueue();
    Cqueue(int n);

    virtual bool isEmpty();
    virtual bool isFull();
    virtual void enqueue(int data);
    virtual int dequeue();
    virtual int front();
    virtual int rear();
    virtual void display();
    virtual ~Cqueue();

private:
    int f,r;
    int n;
    int *array;
};