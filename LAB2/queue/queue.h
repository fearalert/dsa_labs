#include <iostream>
#define MAX 10


template<typename T>
class ArrayQueue{
public:
    ArrayQueue(int f=-1, int r=-1): 
        f(f), r(r){};
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void enqueue(T data);
    virtual void dequeue();
    virtual T front();
    virtual T rear();
    virtual void display();
    

private:
    T elements[MAX];
    int f,r;
};


//checks if the Queue is empty or not. 
template<typename T>
bool ArrayQueue<T>::isEmpty()
{
    return f==r;  
}
       
//checks if the Queue is full or not. 
template<typename T>
bool ArrayQueue<T>::isFull()
{
    return r==MAX-1;
}

//function to insert element in the queue
template<typename T>
void ArrayQueue<T>::enqueue(T data){
    if(isFull()){
        std::cout << "Queue Qverflow." << std::endl;
    }
    else{
        f=0;
        r++;
        elements[r]=data;    
    }
}

//function to delete element from the queue
template<typename T>
void ArrayQueue<T>::dequeue(){
    if(isEmpty()){
        std::cout << "Queue Underflow." << std::endl;
    }
    else{

        int data = elements[f++];
    }
}

//function to give the front element of the queue
template<typename T>
T ArrayQueue<T>::front()
{
    if(isEmpty()){
       std::cout << "Queue Underflow." << std::endl;
    }
    else{
        return elements[f];
    }
}

//function to give the rear element of the queue
template<typename T>
T ArrayQueue<T>::rear()
{
    if(isEmpty()){
       std::cout << "Queue Underflow." << std::endl;
    }
    else{
        return elements[r];
    }
}

//displays the elements of the Queue
template<typename T>
void ArrayQueue<T>::display(){
    if(isEmpty()){
        std::cout << "Queue underflow." << std::endl;
    }
    else{
        int i;
        std::cout << "The elements in the Queue are:" << std::endl;
        for(i=f; i<=r; i++){
            std::cout << elements[i] <<"\t";
        }
        std::cout << "\n" << std::endl;
    }
}