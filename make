all: program5

program5: main.o Scanner.o Token.o Print.o LiteralType.o LineNumberList.o Identifier.o IdentifierBinaryTree.o
		   g++ main.o Scanner.o Token.o Print.o LiteralType.o LineNumberList.o Identifier.o IdentifierBinaryTree.o
main.o : main.cpp
	g++ main.cpp
		   
Scanner.o : Scanner.cpp
	g++ Scanner.cpp
		   
Token.o : Token.cpp
	g++ Token.cpp
		   
Print.o : Print.cpp
	g++ Print.cpp
		   
LiteralType.o : LiteralType.cpp
	g++ LiteralType.cpp
		   
LineNumberList.o : LineNumberList.cpp
	g++ LineNumberList.cpp
		 
Identifier.o : Identifier.cpp
	g++ Identifier.cpp
		  
IdentifierBinaryTree.o : IdentifierBinaryTree.cpp
	g++ IdentifierBinaryTree.cpp
		   
clean:
	rm -rf *o program5
