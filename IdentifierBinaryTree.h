//
//  IdentifierBinaryTree.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//	Added to by Daniel Wong and Adam Miller
//

#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>
#include "common.h"
#include "Token.h"
#include "Identifier.h"
#include "LineNumberList.h"
#include "LiteralType.h"

class IdentifierBinaryTree
{
    Identifier *treeRoot;
    
    void depthFirstDeleteTree(Identifier *id);
    
public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();
    void setTreeRoot(Identifier *root);
    Identifier *getTreeRoot();
	template<class T = string>
    bool addIdentifier(Literal<T> *lit, int lineNum);
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
