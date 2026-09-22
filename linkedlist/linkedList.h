//
//  linkedList.h
//  linkedlist
//
//  Created by Nadjah Duke on 9/3/26.
//
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

class linkedList
{
private:
    Node* head;
    
public:
    linkedList()
    {
        head = nullptr;
    }
    
    void insert(int iData);
    bool removeFirst();
    bool search(int iData);
    bool isEmpty();
    void print();
    bool remove(int iData);
};
#endif // !LINKEDLIST_H
