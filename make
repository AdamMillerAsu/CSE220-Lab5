all: program5

program5: main.o Scanner.o Token.o Print.o LiteralType.o LineNumberList.o Identifier.o IdentifierBinaryTree.o
		   g++ main.o Scanner.o Token.o Print.o LiteralType.o LineNumberList.o Identifier.o IdentifierBinaryTree.o
main.o : main.cpp
	g++ -c main.cpp
		   
Scanner.o : Scanner.cpp
	g++ -c Scanner.cpp
		   
Token.o : Token.cpp
	g++ -c Token.cpp
		   
Print.o : Print.cpp
	g++ -c Print.cpp
		   
LiteralType.o : LiteralType.cpp
	g++ -c LiteralType.cpp
		   
LineNumberList.o : LineNumberList.cpp
	g++ -c LineNumberList.cpp
		 
Identifier.o : Identifier.cpp
	g++ -c Identifier.cpp
		  
IdentifierBinaryTree.o : IdentifierBinaryTree.cpp
	g++ -c IdentifierBinaryTree.cpp
		   
clean:
	rm -rf *o program5
