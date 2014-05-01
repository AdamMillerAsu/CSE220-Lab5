//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//  Added to by Daniel Wong and Adam Miller
//

#include "Token.h"

void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}
