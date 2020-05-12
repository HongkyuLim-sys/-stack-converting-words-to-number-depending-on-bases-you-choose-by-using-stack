#include <iostream>

#include <stdlib.h>
#include "Stack.h"

using namespace std;

int main(){
    
    int input1, divisor, dividened, remainder, quotient;
    Stack S;
    char array[27]={'Z', 'Z', 'Z', 'Z', 'Z', 'Z', 'Z', 'Z', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'};
    
    
    cout<<"------------------------------------"<<endl;
    cout<<"What base do you want to convert to?"<<endl;
    cout<<"1. base 2-9"<<endl;
    cout<<"2. base 11-27"<<endl;
    cout<<"Selection(1 or 2) : ";
    cin>>input1;
    cout<<"------------------------------------"<<endl;
    
    switch(input1){
        case 1:
            cout<<"What base do you want to convert to (specific number btween 2-9)?"<<endl;
            cout<<"Selection(number) : ";
            cin>>divisor;
            cout<<"What decimal number you want to convert?"<<endl;
            cout<<"Selection(any number) : ";
            cin>>dividened;
            
            if(2<=divisor&&divisor<=9){
                quotient=dividened/divisor;
                remainder=dividened%divisor;
                S.push(remainder);
                while(quotient>0){
                    remainder=quotient%divisor;
                    quotient=quotient/divisor;
                    
                    S.push(remainder);
                }
                S.print();
            }
            break;
        case 2:
            
            cout<<"What base do you want to convert to (specific number btween 11-27)?"<<endl;
            cout<<"Selection(number) : ";
            cin>>divisor;
            cout<<"What decimal number you want to convert?"<<endl;
            cout<<"Selection(any number) : ";
            cin>>dividened;
            
            if(11<=divisor&&divisor<=27){
                quotient=dividened/divisor;
                remainder=dividened%divisor;
               
                if(remainder<=9&&remainder>=0){
                    S.push(remainder);
                }
                else if(remainder>=10&&remainder<=27){
                    S.pushLet(array[remainder-1]);
                }
                
                while(quotient>0){
                    remainder=quotient%divisor;
                    quotient=quotient/divisor;
                    
                    if(remainder<=9&&remainder>=0){
                        S.push(remainder);
                    }
                    else if(remainder>=10&&remainder<=27){
                        S.pushLet(array[remainder-1]);
                    }
                }
                S.print();
            }
            break;
        default:
            ;
    }
    
    
    return 0;
}
