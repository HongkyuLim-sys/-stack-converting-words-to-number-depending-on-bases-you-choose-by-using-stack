
#include <iostream>
#include <cstdlib>
#include "Stack.h"

using namespace std;

Stack::Stack(){
    stackPtr = NULL;
}

Stack::~Stack(){
    item* p1;
    item* p2;
    
    p1 = stackPtr;
    
    while(p1 != NULL){
        p2 = p1;
        p1 = p1->prev;
        p2->prev = NULL;
        delete p2;
    }
}

void Stack::push(int remainder){
    item* n  = new item;
    
    n->remainder = remainder;
    n->remainderLetter = 'Z';
   
    if(stackPtr == NULL){
        stackPtr = n;
        stackPtr->prev = NULL;
    }
    else{
        n->prev = stackPtr;
        stackPtr = n;
    }
}

void Stack::pushLet(char remainderLet){
    item* n  = new item;
    
    n->remainderLetter = remainderLet;
    n->remainder = 1234;
    if(stackPtr == NULL){
        stackPtr = n;
        stackPtr->prev = NULL;
    }
    else{
        n->prev = stackPtr;
        stackPtr = n;
    }
}

void Stack::ReadItem(item* r){
    if(0<=r->remainder&&r->remainder<=9){
        cout<<r->remainder<<" ";
    }
    else if('A'<=r->remainderLetter&&r->remainderLetter<='R'){
        cout<<r->remainderLetter<<" ";
    }
}

void Stack::pop(){
    
    if(stackPtr == NULL){
        cout<<"There is nothing on the stack.\n";
    }
    else{
        item* p = stackPtr;
        ReadItem(p);
        stackPtr = stackPtr->prev;
        p->prev = NULL;
        delete p;
    }
}


void Stack::print(){
    
    item* p = stackPtr;
    cout<<"Converted : ";
    while(p != NULL){
        ReadItem(p);
        p = p->prev;
    }
    cout<<endl;
}





