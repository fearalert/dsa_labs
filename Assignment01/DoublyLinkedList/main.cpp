#include <iostream>
#include "ddl.h"

int main() 
{
    linkedlist list;
    node *temp = new node();
    list.addToHead(30);
    list.addToHead(35);
    list.add(40, temp);
    list.addToTail(45);
    list.addToTail(39);
    list.traverse();
    std::cout << list.retrieve(45, temp) << std::endl;

    std::cout << list.removeFromHead() << std::endl;

    std::cout << "Is empty? yes(1) No(0): " << list.isEmpty() << std::endl;
    list.remove(40);


return 0;
}