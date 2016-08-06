
#include "unary.h"
#include <iostream>
using namespace std;

unary::unary(Expression* first,string op):first{first},op{op}{}
unary::~unary(){
    delete first;
}

void unary::prettyprint(){
    if(op=="ABS"){
        cout << "|";
        first->prettyprint();
        cout << "|";
    }
    else if(op=="NEG"){
        cout << "-";
        first->prettyprint();
    }
}

int unary::evaluate(){
    int num=first->evaluate();
    if(op=="ABS"){
        if(num>=0){
            return num;
        }
        else{
            return -1*num;
        }
    }
    else if(op=="NEG"){
        return -1*num;
    }
    return 0;
}




