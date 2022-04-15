#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

void displayMenu() {
	cout << "\n\n            MENU\n\n";
	cout << "1) Display the account balance\n";
}

char getChoice(char max) {
	char choice = cin.get();
	cin.ignore(); 
	return choice;
}


int main() {
	const char MAX_CHOICE = '7';
	Account savings;
	char choice;
	cout << fixed << showpoint << setprecision(2);

	return 0;
}
