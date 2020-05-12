//
//  Stack.h
//  CS340_Project2_Hongkyu_Lim_(Hongkyu_Lim)
//
//  Created by Hongkyu Lim on 09/11/2018.
//  Copyright © 2018 Hongkyu Lim. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

using namespace std;

class Stack{
private:
    struct item{
        int remainder;
        char remainderLetter;
        item* prev;
    };
    
    item* stackPtr;
    
public:
    
    void push(int remainder);
    void pushLet(char remainderLet);
    void pop();
    
    
    //to display what the item is.
    void ReadItem(item* r);
    
    void print();
    
    //constructor
    Stack();
    //deconstructor
    ~Stack();
    
    
};


#endif /* Stack_h */
