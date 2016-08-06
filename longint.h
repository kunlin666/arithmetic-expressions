
#ifndef longint_h
#define longint_h

#include "Expression.h"
#include <iostream>
using namespace std;

class longint: public Expression{
    int num;
public:
    longint(int num);
    virtual void prettyprint()override;
    virtual int evaluate()override;
};


#endif /* longint_h */
