#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node
{
public:
    int info;
    Node *next;

    Node() : next(nullptr) {}
    Node(int info, Node *next) : info(info), next(next) {}
};

class LinkedList
{
public:
    LinkedList();

    bool isEmpty();
    void addToHead(int element);
    int RemoveFromHead();
    void RemoveFromTail();
    void addToTail(int element);
    void remove(int element);
    void add(int element, Node *predecessor);
    bool search (int element);

    int getFromHead(){
        return HEAD->info;
    }

    int getFromTail()
    {
        return TAIL->info;
    }


    void traverse(char separator = ' ');

    Node *retrive(int element, Node *outputNodeptr);

private:
    Node *HEAD;
    Node *TAIL;
};

#endif