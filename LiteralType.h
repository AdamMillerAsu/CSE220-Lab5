//
#include "common.h"
#include "Token.h"

template <class a_type> class LiteralType : Token
{
    
    
public:
a_type getValue(a_type s)
{
	return s;
}

 
};

class Literal_String : public LiteralType<string>
{};

class Literal_Real : public LiteralType<double>
{};

class Literal_Int : public LiteralType<int>
{};
