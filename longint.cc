
#include "longint.h"
#include "Expression.h"
#include <iostream>
using namespace std;

longint::longint(int num):num{num}{}

void longint::prettyprint(){
    cout << num;
}

int longint::evaluate(){
    return num;
}
