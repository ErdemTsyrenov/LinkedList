//
//  main.cpp
//  listFromEnd
//
//  Created by Эрдэм Цыренов on 09.07.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#include <iostream>
#include <vector>
#include "list.h"
using namespace std;

void printList(list& l){
    Node* current = l.last;
    while(current->prev != 0){
        std::cout << current->number << ' ';
        current = current->prev;
    }
}

int main() {
    list l;
    for (int i = 0; i < 10; i++){
        l.push(i);
    }
//    l.~list();
    printList(l);
    std::cout << "deleted" << '\n';
    return 0;
}
