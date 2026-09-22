//
//  main.cpp
//  linkedlist
//
//  Created by Nadjah Duke on 9/3/26.
//

#include <iostream>
#include "linkedList.h"

int main()
{
    linkedList l1;
    
    l1.insert(2);
    l1.insert(20);
    l1.insert(40);
    l1.insert(22);
    l1.print();
   
  //  bool found = l1.search(2);
    
   //std::cout << found << "\n";
    std:: cout << "\n\n";
    l1.removeFirst();
    l1.print();
    
    l1.remove(40);
    std:: cout << "\n\n";
    l1.print();
    
}
