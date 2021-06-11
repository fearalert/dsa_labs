#include <iostream>
#include "../include/linkedlist.h"
#include "../include/stack.h" 
#include "../include/queue.h"

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

    LinkedListStack s;
    
    std::cout << s.isEmpty() << std::endl;
    s.push(5);
    s.push(100);
    s.push(200);
    s.push(180);
    s.top();
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << std::endl;

    LinkedListQueue q;

    std::cout << q.isEmpty() << std::endl;
    q.enqueue(1);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(7);
    q.front();
    q.rear();
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;


    delete temp;
}