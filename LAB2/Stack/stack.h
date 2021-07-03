#include <iostream>
#define MAX 10

template <typename T>
class ArrayStack
{
public:
    ArrayStack(int topIndex=-1)
        :topIndex(topIndex){}

    virtual void push(T data);
    virtual void pop();
    virtual T top();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void display();

private:
    T value[MAX];
    int topIndex;
};

//checks if the Stack is empty or not. 
template <typename T>
bool ArrayStack<T>::isEmpty()
{
    return topIndex == -1 ;
}

//checks if the Stack is Full or not. 
template <typename T>
bool ArrayStack<T>::isFull()
{
    return topIndex == MAX-1 ;
}

//fuction to push element into the stack
template <typename T>
void ArrayStack<T>::push(T data)
{
    if (isFull())
    {
       std::cout << "Stack Overflow." << std::endl;
    }
    else
    {
        topIndex++;
        value[topIndex] = data;
    }
}

//function to pop element out of the stack
template <typename T>
void ArrayStack<T>::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack Underflow" << std::endl;
    }
    else
    {
        value[topIndex--];
    }
}

//fuction to give the top element of the queue
template <typename T>
T ArrayStack<T>::top()
{
    if (isEmpty())
    { 
        std::cout << "Stack Underflow" << std::endl;
    }
    else
    {
        return value[topIndex];
    }
}

//function to display the elements of the Stack
template <typename T>
void ArrayStack<T>::display(){
    if(isEmpty()){
        std::cout << "Stack Underflow." << std::endl;
    }
    else{
        int i;
        std::cout << "The elements in the stack are: " << std::endl;
        for(i=0; i<=topIndex; i++){
            std::cout << value[i] <<"\t";
        }
        std::cout << "\n" << std::endl;
    }
}