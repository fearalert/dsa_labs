#pragma once
#include <iostream>

    
class node{
    public:
        int data;
        node *next;
        node *previous;
        node() : next(nullptr) {}
        node(int data, node *next) : data(data), next(next) {}
};


class linkedlist{
    public:
        linkedlist();
        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add(int data, node *predecesor);
        int removeFromHead();
        void removeFromTail();
        void remove(int data);
        bool retrieve(int data, node *dataOutPtr);
        void traverse();
    
    protected:
        node *head;
        node *tail;
};

