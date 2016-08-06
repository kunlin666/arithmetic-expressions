
#include "binary.h"
#include <iostream>
using namespace std;

binary::binary(Expression* first, Expression* second,string op):first{first},second{second},op{op}{}

binary::~binary(){
    delete first;
    delete second;
}

void binary::prettyprint(){
    cout << "(";
    first->prettyprint();
    cout << " " << op << " ";
    second->prettyprint();
    cout << ")";
}

int binary::evaluate(){
    if(op=="+"){
        return first->evaluate()+second->evaluate();
    }
    else if(op=="-"){
        return first->evaluate()-second->evaluate();
    }
    if(op=="*"){
        return first->evaluate()*second->evaluate();
    }
    if(op=="/"){
        return first->evaluate()/second->evaluate();
    }
    else return 0;
}

