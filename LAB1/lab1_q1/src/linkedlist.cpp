#include <iostream>
#include "../include/linkedlist.h" 


//implementataion of singly linked list
LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}

//Checks if the list is empty or not. Returns 1 if true, and 0 if false.
bool LinkedList::isEmpty()
{
    return HEAD == nullptr 
    &&
    TAIL ==nullptr;
}

//function to add new data at top of the head
void LinkedList::addToHead(int element)
{
    Node *newNode = new Node();
    newNode->info = element;
    newNode->next =HEAD;

    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
}

//function to add new data to the tail end
void LinkedList::addToTail(int element){
    Node *newNode = new Node();
    if(isEmpty())
    {
        newNode->info = element;
        newNode->next = nullptr;
        TAIL = newNode;
        HEAD = TAIL;
    }

    else
    {
        newNode->info = element;
        newNode->next = nullptr;
        TAIL->next = newNode;

        TAIL = newNode;
    }
}

//function to remove data from the head
int LinkedList::RemoveFromHead()
{
    if (!isEmpty())
    {
        Node *nodeToDelete = HEAD;
        int data = nodeToDelete->info;
        HEAD = nodeToDelete->next;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }

        delete nodeToDelete;

        return data;
    }  
    else 
    {
        std::cout << "List was empty!!" << std::endl;
    }
}

//function to remove data from the tail
void LinkedList::RemoveFromTail()
{
    if(!isEmpty())
    {
        Node *nodeToDelete = TAIL;

        if(HEAD == TAIL)
        {
            HEAD=TAIL=nullptr;
        }
        else{
            Node *pred = HEAD;

            while(pred->next != TAIL)
            {
                pred = pred->next;
            }
            TAIL = pred;
            pred->next = nullptr;

            delete nodeToDelete;
        }
    }
    else{
        std::cout << "List is empty." << std::endl;
    }
}
//function to add items between the nodes
void LinkedList::add(int element, Node *pred)
{
    Node *node = new Node();
    node->info = element;
    node->next = pred->next;
    pred->next = node;    
}

//function to remove element from the node
void LinkedList::remove(int element)
{
    if (isEmpty())
    {
        std::cout << "List was empty!!" <<std::endl;
    }
    else{
        if(HEAD->info==element){
            this->RemoveFromHead();

            if(HEAD == nullptr){
                TAIL == nullptr;
            }
        }
        else{
            Node *temp = HEAD->next;
            Node *prev = HEAD;

            while (temp != nullptr)
            {
                if (temp->info == element)
                {
                    prev->next = temp->next;
                    delete temp;

                    if (prev->next == nullptr){
                        TAIL = prev;
                    }
                }
                else{
                    prev = prev->next;
                    temp = temp->next;
                }
            }
        }
    }
}

//returns the pointer to the node with the requested data
Node *LinkedList::retrive(int element, Node *outputPtr)
{
    if(isEmpty())
    {
        std::cout << "List is empty." << std::endl;
        return 0;
    }
    else{
        if(HEAD->info == element)
        {
            *outputPtr = *this->HEAD;
            return outputPtr;
        }
        else{
            Node *temp = HEAD->next;
            while(temp !=nullptr)
            {
                if(temp->info == element)
                {
                    *outputPtr = *temp;
                    return outputPtr;
                }
                else{
                    temp = temp->next;
                }
            }
            outputPtr->info = -1;
            return outputPtr;
        }
    }

}

//returns true if element exists in the list, otherwise false.
bool LinkedList::search(int element)
{
    if(isEmpty())
    {
        std::cout << "List was empty!!" << std::endl;
    }
    else{
        std::cout << "Search result for the given element " << element << " is:(1 if true and 0 if false) ===> ";
        if(HEAD->info == element)
        {
            return true;
        }
        else{
            Node *temp = HEAD->next;
            while(temp != nullptr)
            {
                if(temp->info == element)
                {
                    return true;
                }
                else{
                    temp = temp->next;
                }
            }
        return false;
        }
    }
}

void LinkedList::traverse(char separator)
{
    if (!isEmpty())
    {
        Node *temp = HEAD;

        while (temp != nullptr)
        {
            std::cout << temp->info << separator;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "List is empty!!" << std::endl;
    }
}

