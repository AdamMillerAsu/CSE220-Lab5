#include "Identifier.h"
Identifier::Identifier()
{
	setLeftChild(NULL);
    setRightChild(NULL);
	list = NULL;
}
Identifier::~Identifier()
{

    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;
    
    while (root != NULL)
    {
        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
    }
        free(this->literal.stringLiteral);
}
void Identifier::setLeftChild(Identifier *id)
{
	this->leftChild = id;
}
Identifier *Identifier::getLeftChild()
{
	return leftChild;
}
void Identifier::setRightChild(Identifier *id)
{
	this->rightChild = id;
}
Identifier *Identifier::getRightChild()
{
	return rightChild;
}
void Identifier::addToLineNumberList(LineNumberList *listItem)
{
	    LineNumberList *tmp = getLineNumberList();
    
    if (tmp == NULL)
    {
        list = listItem;
    }
    else
    {
        while (tmp->getNextLineNumber() != NULL)
        {
            tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
	}
}
LineNumberList *Identifier::getLineNumberList()
{
	return this->list;
}
