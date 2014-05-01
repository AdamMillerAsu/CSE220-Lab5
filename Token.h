//
//  Token.h
//  Lab4
//
//  Created by Bryce Holton.
//  Added to by Daniel Wong and Adam Miller
//

#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>
#include "common.h"
#include "LiteralType.h"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
protected:
    TokenCode code;
    
public:
    Token();
    ~Token();
    void setCode(TokenCode newCode);
    TokenCode getCode();
};

#endif /* defined(__Lab4__Token__) */
