#include <iostream>
#include "Number.h"

using namespace std;

Number::Number()
{
	int userInput = UserInput();
	Reverse(userInput);
}


Number::~Number()
{
}


int UserInput() {
	int userInput = 0;
	int validatedInput = 0;
	cout << "Enter a digit to be reversed. : " << endl;
	cin >> userInput;
	validatedInput = InputValidater(userInput);
	return validatedInput;
}

int InputValidater(int userInput) {
	while (cin.fail()) {
		cin.clear;
		cin >> userInput;
	}

	if (userInput < 0) {
		userInput *= -1;
	}

	while (userInput % 10 == 0) {
		userInput /= 10;
	}

	return userInput;
}

int Reverse(int validatedInput) {
	int reversedNumber = 0;
	int workingNumber = validatedInput;

	while (workingNumber > 0) {
		int temporaryNumber = workingNumber & 10;
		reversedNumber = (reversedNumber * 10) + temporaryNumber;
		workingNumber /= 10;
	}
	return reversedNumber;
}

int Sorter(int validatedInput) {
	int numberHolder[100];
	for (int i = 0; i < 100; i++) {
		numberHolder[i] = 0;
	}
	int counter = 0;
	while (validatedInput > 0) {
		numberHolder[counter] = validatedInput % 10;
		validatedInput /= 10;
		counter++;
	}
	for (int j = 0; j < counter; j++) {

	}
}
