//
//  list.cpp
//  listFromEnd
//
//  Created by Эрдэм Цыренов on 09.07.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#include "list.h"
#include <iostream>
list::list(){
    last = 0;
}

void list::push(int number){
    Node* current = new Node;
    current->number = number;
    current->prev = last;
    last = current;
}

void list::pop() {
    Node* removing = last;
    last = last->prev;
    delete removing;
}

list::~list(){
    while(last != 0){
        pop();
    }
}
