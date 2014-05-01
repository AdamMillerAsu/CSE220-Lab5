#ifndef __Lab5__Identifier__
#define __Lab5__Identifier__

#include <iostream>
#include "common.h"
#include "LineNumberList.h"
#include "Token.h"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Identifier: public Token
{
private:
	string tokenString;
    Identifier *leftChild;
    Identifier *rightChild;
    LineNumberList *list;
    
public:
    Identifier();
    ~Identifier();
	void setLeftChild(Identifier *id);
    Identifier *getLeftChild();
    void setRightChild(Identifier *id);
    Identifier *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
	void setTokenString(string s);
	string getTokenString();
    LineNumberList *getLineNumberList();
};

#endif /* defined(__Lab5__Identifier__) */
