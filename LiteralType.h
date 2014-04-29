//
#include "common.h"
#include "Token.h"

class LiteralType : public Token
{ 

};

class Literal_String : public LiteralType
{};
class Literal_Real : public LiteralType
{
public:
double value;
};

class Literal_Int : public LiteralType
{
public:
int value;
};
