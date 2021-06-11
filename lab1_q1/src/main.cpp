#include <iostream>
#include "../include/linkedlist.h"

int main() 
{
    LinkedList list;
    Node *temp = new Node();

    std::cout<< list.isEmpty() << std::endl; //evaluate 1 if true or list is empty.
    list.RemoveFromHead();

    list.addToHead(10);
    list.addToHead(15);

    std::cout<< list.isEmpty() << std::endl;  //evaluate 0 if false or list is not empty.

    list.addToTail(30);
    list.addToTail(35);
    list.traverse(',');
       
    std::cout << list.search(300) << std::endl; //elaluate 0 if element is not in the list
    std::cout << list.search(30) << std::endl; //elaluate 1 if element is in the list
    
    std::cout<< "The tail element is: " << list.getFromTail() << std::endl;   
    std::cout<< "The head element is: " << list.getFromHead() << std::endl; 
    
    list.RemoveFromTail();
    list.traverse();
    std::cout << list.retrive(35, temp) << std::endl;
    list.remove(15);    
    list.traverse();
    std::cout << std::endl;

    delete temp;
}