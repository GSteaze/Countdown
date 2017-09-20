#include <iostream>

class Number
{

public:

	Number();
	~Number();

	int userInput;

	int UserInput();

private:

	int validatedInput, number, reversedNumber;

	int InputValidater(int userInput);

	int Reverse(int validatedInput);

	int Sorter(int validatedInput);
};

