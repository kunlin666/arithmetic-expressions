
#ifndef unary_h
#define unary_h

#include "Expression.h"
#include <string>
using namespace std;

class unary :public Expression{
    Expression* first;
    string op;
public:
    unary(Expression* first,string op);
    
    virtual ~unary();
    
    virtual void prettyprint()override;
    
    virtual int evaluate()override;
};

#endif /* unary_h */
