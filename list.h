//
//  list.h
//  listFromEnd
//
//  Created by Эрдэм Цыренов on 09.07.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#ifndef list_h
#define list_h

struct Node{
    int number;
    Node* prev;
};

class list{
public:
    Node* last;
    list();
    ~list();
    void push(int number);
    void pop();
};


#endif /* list_h */
