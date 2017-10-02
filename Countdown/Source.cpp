#include <iostream>
#include "Number.h"

using namespace std;

int main() {
	bool isAgain = true;

	while (isAgain) {
		Number userNumber;
		isAgain = userNumber.RunAgain();
	}
	return 0;
}