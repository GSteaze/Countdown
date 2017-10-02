#include <iostream>
#include "Number.h"

using namespace std;

const int kEndOfLine = 1024;

Number::Number()
{	
	int userInput = UserInput();
	bool isNegative = IsNegative(userInput);
	int reversedDigit = Reverse(userInput, isNegative);
	DisplayResults(reversedDigit);
}


Number::~Number()
{
}


int Number::UserInput() {
	int userInput = 0;
	cout << "Enter a digit to be reversed. : ";
	cin >> userInput;
	int validatedInput = InputValidater(userInput);
	return validatedInput;
}

int Number::InputValidater(int userInput) {
	
	while (cin.fail()) {
		cin.clear();
		cin.ignore(kEndOfLine, '\n');
		cout << "Please try again: ";
		cin >> userInput;
	}
	return userInput;
}

bool Number::IsNegative(int validatedInput) {
	
	bool isNegative = false;

	if (validatedInput < 0) {
		isNegative = true;
	}
	return isNegative;
}

int Number::Reverse(int validatedInput, bool isNegative) {
	if (isNegative) {
			validatedInput *= -1;
	}

	int reversedNumber = 0;
	int workingNumber = validatedInput;

	while (workingNumber > 0) {
		int temporaryNumber = workingNumber % 10;
		reversedNumber = (reversedNumber * 10) + temporaryNumber;
		workingNumber /= 10;
	}

	if (isNegative) {
		reversedNumber *= -1;
	}

	return reversedNumber;
}

//int Number::Sorter(int validatedInput) {
//	int numberHolder[100];
//	for (int i = 0; i < 100; i++) {
//		numberHolder[i] = 0;
//	}
//	int counter = 0;
//	while (validatedInput > 0) {
//		numberHolder[counter] = validatedInput % 10;
//		validatedInput /= 10;
//		counter++;
//	}
//	for (int j = 0; j < counter; j++) {
//
//	}
//}

void Number::DisplayResults(int validatedInput) {
	cout << "The reversed digit is " << validatedInput << endl;
}

bool Number::RunAgain() {
	bool validAnswer = false;
	bool isAgain = false;

	while (!validAnswer) {

		cout << "Would you like to enter another number?" << endl
			<< "Enter 'y' for yes 'n' for no. : " << endl;
		char userInput = ' ';
		cin >> userInput;
		if (userInput == 'y') {
			isAgain = true;
			validAnswer = true;
		}
		else if (userInput == 'n') {
			cout << "Program will now close." << endl;
			isAgain = false;
			validAnswer = true;
		}
		else {
			cout << "Answer must be 'y' or 'n'." << endl
				<< "Please try again : ";
			cin.clear();
			cin.ignore(kEndOfLine, '\n');
		}
	}
	return isAgain;
}
