//
#include "common.h"
#include "Token.h"

class LiteralType : Token
{ 

};

class Literal_String :  LiteralType
{};
class Literal_Real : LiteralType
{
public:
double value;
};

class Literal_Int : LiteralType
{
public:
int value;
};
