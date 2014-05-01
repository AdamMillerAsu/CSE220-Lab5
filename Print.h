//
//  Print.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "Identifier.h"
#include "IdentifierBinaryTree.h"
#include "common.h"
#include "Token.h"
#include "LiteralType.h"

using namespace std;

class Print
{
private:
    string sourceFileName;
    string currentDate;
    int pageNumber;
    int lineCount;
    
    void printPageHeader();
    
public:
    Print(char source_name[], char date[]);
    ~Print();
    
    void printLine(char line[]);
	template<class T>
    void printToken(Literal<T> *lit);
    int getLineCount();
    void printTree(Identifier *identifier);
    void printTreeRecursive(Identifier *identifier);
};

#endif /* defined(__Lab4__Print__) */
