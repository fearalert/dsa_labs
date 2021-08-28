#include <iostream>
#include "ddl.h"

linkedlist::linkedlist(){
    head = nullptr;
    tail = nullptr;
}


bool linkedlist::isEmpty(){
    if (head == nullptr){
        return true;
    }
    else{
        return false;
    }
}


void linkedlist::addToHead(int data){
    node *newNode = new node();
    newNode->data = data;
    newNode->next = head;
    newNode->previous = nullptr;
    head = newNode;
    // If added node is the only node in the list
    if (tail == nullptr){
        tail = head;
    }
    std::cout << "Added to Head." << std::endl;
}


void linkedlist::addToTail(int data){
    node *newNode = new node();
    if(this->isEmpty()){
        newNode->data = data;
        newNode->next = nullptr;
        newNode->previous = nullptr;
        tail = newNode;
        head = tail;
    }
    else{
        newNode->data = data;
        newNode->next = nullptr;
        tail->next = newNode;
        tail = newNode;
    }
}


void linkedlist::add(int data, node *predecessor){
    node *newNode = new node();
    newNode->data = data;
    newNode->next = predecessor->next;
    newNode->previous = predecessor;
    predecessor->next = newNode;
}


void linkedlist::traverse(){
    node *p = new node();
    p = head;
    std::cout << "The traversed list is: " << std::endl;
    while(p!=nullptr){
        std::cout << p->data << '\t';
        p = p->next;
    }
    std::cout << std::endl;
}


int linkedlist::removeFromHead(){
    if(!this->isEmpty()){
        node *nodeToDelete = new node();
        nodeToDelete = head;
        int pop_value = head->data;
        head = nodeToDelete->next;
        delete nodeToDelete;
        // If list becomes empty after deletion
        if(head==nullptr){
            tail = nullptr;
        }
        std::cout << "Removed from Head: ";
        return pop_value;
    }
    return 0;
}


void linkedlist::removeFromTail(){
    if(!this->isEmpty()){
        node *nodeToDelete = new node();
        nodeToDelete = tail;
        if(head == tail){
            head = nullptr;
            tail = nullptr;
        }
        else{
            node *predecessor = new node();
            predecessor = head;
            while(predecessor->next !=tail){
                predecessor = predecessor->next;
            }
            tail = predecessor;
            predecessor->next = nullptr;
        }
        delete nodeToDelete;
    }
}


void linkedlist::remove(int data){
    if(!this->isEmpty()){
        if (head->data == data){
            removeFromHead();
        }
        else{
            node *temp = new node();
            temp = head->next;
            node *previous = new node();
            previous = head;

            while(temp!=nullptr){
                if(temp->data==data){
                    break;
                }
                else{
                    previous = previous->next;
                    temp = temp->next;
                }
            }
            if(temp != nullptr){
                previous->next = temp->next;
                temp->previous=nullptr;
                delete temp;
                if (previous->next == nullptr){
                    tail = previous;
                }
            }
        }
    }
}


bool linkedlist::retrieve(int data, node *outPtr){
    node *point = head;
    while(point!=nullptr && point->data!=data){
        point = point->next;
    }
    if(point==nullptr){
        return false;
    }
    else{
        outPtr = point;
        return true;
    }
}


