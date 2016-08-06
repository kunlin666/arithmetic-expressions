
#ifndef binary_h
#define binary_h

#include "Expression.h"
#include <string>
using namespace std;

class binary: public Expression{
    Expression* first;
    Expression* second;
    string op;
public:
    binary(Expression* first, Expression* second,string op);

    virtual ~binary();
    
    virtual void prettyprint()override;
    
    virtual int evaluate()override;
};


#endif /* binary_h */
