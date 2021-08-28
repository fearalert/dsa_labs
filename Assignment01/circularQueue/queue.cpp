#include "queue.h"


Cqueue::Cqueue() :f(-1), r(-1), n(5){
        array = new int[n];
}

Cqueue::Cqueue(int n):
        f(f), r(r), array(new int[n]){}

bool Cqueue::isEmpty(){
    if(f==-1){
        return true;
    }
    else{
        return false;
    }
}

bool Cqueue::isFull(){
    if(f==0 && r==n-1){
        return true;
    }
    if(r==(f-1)%n){
        return true;
    }
    else{
        return false;
    }
}

void Cqueue::enqueue(int data){
    if(isFull()){
        std::cout << "\nCannot enqueue. Queue overflow"<< std::endl;
    }
    else 
    {   
        if(f==-1){
            f=0;
        }
        
        r=(r+1)%n;
        array[r]=data;
        std::cout << "\nEnqueued Element: " << data << std::endl;
    }
}

int Cqueue::dequeue(){
    if(isEmpty()){
        std::cout << "\nCannot Dequeue. Queue Underflow" << std::endl;
    }
    else{
        int data = array[f];
        if(f==r){
            f=-1;
            r=-1;
        }
        else{
            f=(f+1)%n;
        }
    return data;
    }
}

int Cqueue::front(){
    if(isEmpty()){
        std::cout << "\nCannot Display. Queue Underflow" << std::endl;
    }
    else{
        return array[f];
    }
}
int Cqueue::rear(){
    if(isEmpty()){
        std::cout << "\nCannot Display. Queue Underflow" << std::endl;
    }
    else{
        return array[r];
    }
}
void Cqueue::display(){
    int i;
    if(isEmpty()){
        std::cout << "\nQueue Underflow." << std::endl;
    }
    else{
        std::cout << "\nElements in the Queue:" << std::endl;
        for(i=f;i!=r;i=(i+1)%n)
        {
            std:: cout << array[i] << "\t";
        }
        std:: cout << array[i] << std::endl;
        
    }
}

Cqueue::~Cqueue(){
        delete array;
}