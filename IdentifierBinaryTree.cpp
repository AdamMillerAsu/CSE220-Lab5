//
//  IdentifierBinaryTree.cpp
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//	Added to by Daniel Wong and Adam Miller
//

#include "IdentifierBinaryTree.h"
#include "LineNumberList.h"

using namespace std;

IdentifierBinaryTree::IdentifierBinaryTree()
{
    setTreeRoot(NULL);
}
IdentifierBinaryTree::~IdentifierBinaryTree()
{
    Identifier *root = getTreeRoot();
    
    if (root != NULL)
    {
        depthFirstDeleteTree(root);
    }
}
void IdentifierBinaryTree::depthFirstDeleteTree(Identifier *id)
{
    if (id->getLeftChild() != NULL)
    {
        depthFirstDeleteTree(id->getLeftChild());
    }
//    cout << tok->getTokenString() << "\n";
    if (id->getRightChild() != NULL)
    {
        depthFirstDeleteTree(id->getRightChild());
    }
    delete id;
}
void IdentifierBinaryTree::setTreeRoot(Identifier *root)
{
    this->treeRoot = root;
}
Identifier *IdentifierBinaryTree::getTreeRoot()
{
    return this->treeRoot;
}
bool IdentifierBinaryTree::addIdentifier(Identifier *id, int lineNum)
{
    bool success = false;
    LineNumberList *listItem = new LineNumberList();
    
    listItem->setLineNumber(lineNum);
    if (getTreeRoot() == NULL)
    {
        setTreeRoot(id);
        id->addToLineNumberList(listItem);
        success = true;
    }
    else
    {
        string tokenName = id->getTokenString();
        Identifier *parentNode = getTreeRoot();
        string treeNodeName;
        int stringComparison;
        
        while (parentNode != NULL)
        {
            treeNodeName = parentNode->getTokenString();
            stringComparison = tokenName.compare(treeNodeName);
            if (stringComparison == 0)
            {
                //They are the same identifier token we just need to add a new line number to the list.
                parentNode->addToLineNumberList(listItem);
                parentNode = NULL; //Exit the loop
                delete id;         //We won't need tok and it won't be deleted in main.
                success = true;
            }
            else if (stringComparison < 0)
            {
                //Go to the left.
                if (parentNode->getLeftChild() == NULL)
                {
                    //Add tok to the left
                    id->addToLineNumberList(listItem);
                    parentNode->setLeftChild(id);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getLeftChild();
                }
            }
            else
            {
                //Go to the right.
                if (parentNode->getRightChild() == NULL)
                {
                    //Add tok to the right
                    id->addToLineNumberList(listItem);
                    parentNode->setRightChild(id);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getRightChild();
                }
            }
        }
    }
    return success;
}
