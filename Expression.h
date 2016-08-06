
#ifndef Expression_h
#define Expression_h

class Expression{
public:
    virtual void prettyprint() =0;
    virtual int evaluate() =0;
    virtual ~ Expression();
};

#endif /* Expression_h */
