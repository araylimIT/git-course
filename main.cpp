#include <iostream>
#include <iomanip>
#include "Account.h"

using namespace std;

// make a display menu function

void displayMenu() {
	cout << "\n\n            MENU\n\n";
	cout << "1) Display the account balance\n";
	cout << "2) Display the number of transactions\n";
	cout << "3) Display interest earned for this period\n";
	cout << "4) Nake a deposit\n";
	cout << "5) Make a withdraw\n";
	cout << "6) Add interest for this period\n";
	cout << "7) Exit \n\n";
	cout << "Enter your choice";
}

// make a method to get choice validate choice and return choice to main method

char getChoice(char max) {
	char choice = cin.get();
	cin.ignore(); // bypass the enter '\n' in the input buffer

	while (choice < '1' || choice > max) {
		cout << "Choice must between 1 and" << max << ". " << "Please re-enter choice: ";
		choice = cin.get();
		cin.ignore();
	}
	return choice;

}

// now make a methof for deposit which has an object parameter

void makeDeposit(Account& account) {
	double dollars;
	cout << "Enter the amount of deposit: ";
	cin >> dollars;
	cin.ignore();
	account.makeDeposit(dollars);

}

// make a method for withdrawal

void withdraw(Account &account) {
	double dollars;
	cout << "Enter the amount of withdrawl: ";
	cin >> dollars;
	cin.ignore();
	if (!account.withdraw(dollars)) // if amount is invalid
	{
		cout << "ERROR: Withdraw amount is too large. \n\n";

	}
}

// after completing these methods we make a main method of this application

int main() {
	const char MAX_CHOICE = '7';
	Account savings;
	char choice;
	cout << fixed << showpoint << setprecision(2);
	do {
		displayMenu();
		choice = getChoice(MAX_CHOICE);

		switch (choice) {
		case'1':
			cout << "The current balance is $";
			cout << savings.getBalance() << endl;
			break;
		case'2':
			cout << "There have been ";
			cout << savings.getTransactions() << "transactions. \n";
			break;
		case'3':
			cout << "Interest earned for this period: $";
			cout << savings.getInterest() << endl;
			break;
		case'4':
			makeDeposit(savings);
			break;
		case'5':
			withdraw(savings);
			break;
		case'6':
			savings.calculateInterest();
			cout << "Interest added.\n";
		}
	} while (choice != '7');
	return 0;
}
