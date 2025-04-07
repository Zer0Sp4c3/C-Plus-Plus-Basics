#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;
// Do not use "using namespace std;"

int main() 
{
	cout << "Hello World" << endl;

	/* Variable creation:
	
		int x = 0;
		x = 5;
		you don't need to assign values to a variable at creation.
		i.e. "int x;" works fine, but it is generally good practise to not leave variables blank
		as they are stored as "null" and can mess up the program when returned.
	*/

	// Variable types
	int myInt = 5; //Stores integers
	float myFloat = 5.0; //Stores decimals
	double myDouble = 5.0; //Stores double the amount as a float
	char myChar = 'b'; //Stores a character, store in ''
	string myString = "This is a string"; //Stores a string of letters, store in ""
	bool myBool = false; //Stores true/false

	// if statements
	/*
		< Less than
		> Greater than
		<= Less than or equal to
		>= Greater than or equal to
		== Equals
		! Not
		&& And
		|| Or
	*/

	int x = 5;
	int i = 0;

	if (x > 0)
		cout << "x is positive \n"; // '\n' is also a newline feature in C++
	else if (x < 0)
		cout << "x is negative \n";
	else if (x == 0)
		cout << "x equals zero \n";

	//You must use curly brackets when if statement is multiple lines:
	if (x > 0)
	{
		cout << "x is greater than 0" << endl;
		cout << "x is positive" << endl;
	}

	// Loops

	// for loops
	for (i = 1; i <= 3; i++)
	{
		cout << "Iteration " << i << endl;
	}

	// while loops
	while (i > 1)
	{
		i--;
	}

	// do-while loops
	bool doorLocked = false;

	do
	{
		cout << "Locking the door" << endl;
		doorLocked = true;
	} while (doorLocked == false);

	/*
		DO NOT write infinite loops

		while (true)
		{
			cout << "This never stops, oops!" << endl;
		}

		if the condition is never false, it runs forever
	*/

	// User input
	int Answer = 0;
	string UserName = "";

	cout << "What's 2+2?" << endl;
	cin >> Answer;

	cout << "What's your name?" << endl;
	getline(cin, UserName);

	// Formatting

	/*
		When writing code, it is best to use good formatting.

		indenting if statements:
		if
			[body]

		Proper naming for variables is good too
		Name variables what they're used for
		"Selection, Answer, UserName, etc."

		If a variable name has multiple words, use these:

		camelCase: first word is lowercase while second word is uppercase
		PascaleCase: every word is uppercase
		snake_case: every word is lowercase, and separated by an underscore

		Also use spacing:
		int answer=5+3; <- Bad
		int answer = 5 + 3; <- Good

		Comments are also helpful
		They help others working with you, or you coming back to look at old work, to understand what you wrote
		This code contains many comments of how to do both single line and multi line comments
	*/

	cout << "This is one very long sentence"
		<< "and it needs to be broken up."
		<< endl;

	// Most of these formatting tricks are included in Visual Studio 2022, and they will automatically format correctly
	// Please be aware to keep up with these good habits in case you use other IDEs.

}