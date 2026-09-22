//
//  Node.h
//  linkedlist
//
//  Created by Nadjah Duke on 9/3/26.
//
#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
public:
    int idata;
    Node* next;
    
public:
     
    Node(int data)
    {
        idata = data;
        next = nullptr;
    }
};
#endif // !NODE_H
