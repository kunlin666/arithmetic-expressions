#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Expression.h"
#include "longint.h"
#include "unary.h"
#include "binary.h"
using namespace std;

bool isbiop(string op){
    return (op=="*"||op=="/"||op=="+"||op=="-");
}

bool isuop(string op){
    return (op=="ABS"||op=="NEG");
}

int main() {
    cin.exceptions(ios::eofbit|ios::failbit);
    int n;
    string s;
    vector <Expression *> myvec;
    try{
        while(!cin.eof()){
            cin >> s;
            if(isbiop(s)){
                Expression *p1=myvec.back();
                myvec.pop_back();
                Expression *p2=myvec.back();
                myvec.pop_back();
                Expression* cur=new binary{p2,p1,s};
                myvec.push_back(cur);
            }
            else if(isuop(s)){
                Expression *p3=myvec.back();
                myvec.pop_back();
                Expression* cur=new unary{p3,s};
                myvec.push_back(cur);
            }
            else {
                istringstream ss{s};
                ss >> n;
                Expression* cur=new longint{n};
                myvec.push_back(cur);
            }
        }
    }
    catch(ios::failure){
        myvec[0]->prettyprint();
        cout << endl;
        cout << "= " << myvec[0]->evaluate() << endl;
        delete myvec[0];
        myvec.clear();
    }
    
}
