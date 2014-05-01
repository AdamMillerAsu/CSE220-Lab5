//

#ifndef __Lab5__Literal__
#define __Lab5__Literal__

#include "common.h"
#include "Token.h"

template<typename T>
class Literal : public Token
{ 
protected:
	T data;
public:
	Literal(T data);
	~Literal();
	T getLiteral();
	setLiteral(T data);
};
#endif
