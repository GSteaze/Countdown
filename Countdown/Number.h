#include <iostream>

class Number
{

public:

	Number();
	~Number();

	bool RunAgain();

	int UserInput();

private:

	int userInput;

	int validatedInput, number, reversedNumber;

	int InputValidater(int userInput);

	int Reverse(int validatedInput,bool isNegative);

	//int Sorter(int validatedInput);
	
	bool IsNegative(int validatedInput);

	void DisplayResults(int validatedInput);


};

