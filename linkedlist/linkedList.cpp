//
//  linkedList.cpp
//  linkedlist
//
//  Created by Nadjah Duke on 9/3/26.
//
#include <iostream>
#include "linkedList.h"


bool linkedList::isEmpty()
{
    return(head == nullptr);
}
void linkedList::insert(int iData)
{
    Node* theNode = new Node(iData);
    
    theNode->next = head;
    head = theNode;
}
void linkedList::print()
{
    Node* current = head;
    while(current!=nullptr)
    {
        std::cout<< current->idata << "\n";
        current = current->next;
    }
}
bool linkedList::search(int iData)
{
    if(isEmpty())
    {
        return false;
    }
    
    Node* current = head;
    
    while(current!=nullptr)
    {
        if(current->idata == iData)
        {
            return true;
        }
        
        current = current->next;
    }
    
    return false;
}

bool linkedList::removeFirst()
{
    if(isEmpty())
    {
        std::cout<< "The array is empty \n";
        return false;
    }
    
    Node* temp = head;
    head = head->next;
    
    delete temp;
    return true;
}

// issue with head here
bool linkedList::remove(int iData)
{
    if(isEmpty())
    {
        std::cout<< "The list is empty \n";
        return false;
    }
    
    Node* current = head;
    Node* previous = nullptr;
    
    while(current!= nullptr)
    {
        
        if(current->idata == iData && current == head)
        {
            Node* temp = current;
            head = head-> next;
            
            delete temp;
            return true;
        }
        else if (current->idata == iData)
        {
            Node* temp = current;
            previous->next = current->next;
            
            delete temp;
            
            return true;
        }
        
        previous = current;
        current = current->next;
    }
    
    return false;
}

