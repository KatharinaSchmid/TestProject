// FirstTest.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>



void namespaceTest()
{
	using namespace std; // this using directive tells the compiler that we're using everything in the std namespace!
	cout << "Hello world!" << std::endl; // so no std:: prefix is needed here!
}

void standardFuntions()
{
	std::cout << "Enter a number: "; // ask user for a number
	char x; //int x extracts only integer values, char each text symbols
	std::cin >> x; // read number from console and store it in x
	std::cout << "You entered " << x << std::endl;
}

int firstOutput()
{
	int x = 5;
	//std::cout << "Hello world!" << std::endl;
	std::cout << x << " Hi" << std::endl;
	return 0;
}

// add() takes two integers as parameters, and returns the result of their sum
// The values of x and y are determined by the function that calls add()
int add(int x, int y)
{
	return x + y;
}
//Need to define a function like add before the call, alternatively using a prototype:
//int add(int x, int y);
//Then the definition of add safter the main is possible

//Use function from other script -> prototype needed
void smallTest();


//Use of proprocessor -> processes #include and #define statements
void substTest() {
#define PRINT_JOE

#ifdef PRINT_JOE
	std::cout << "Joe" << std::endl;
#endif

#ifdef PRINT_BOB
	std::cout << "Bob" << std::endl;
#endif


}

int main()
{
	//namespaceTest();
	//smallTest();
	substTest();
	return 0;
}