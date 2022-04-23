#include <iostream>
#include <iomanip>
#include "Account.h"
#include "AccountBalance.h"
#include "AccountWithdraw.h"
using namespace std;

// make a display menu function



void displayMenu() {
	cout << "\n\n            MENU\n\n";
	cout << "1) Display the account balance\n";
	//cout << "2) Display the number of transactions\n";
	//cout << "3) Display interest earned for this period\n";
	cout << "2) Nake a deposit\n";
	cout << "3) Make a withdraw\n";
	//cout << "6) Add interest for this period\n";
	cout << "4) Exit \n\n";
	cout << "Enter your choice ";
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

void makeDeposit(AccountBalance& account) {
	double dollars;
	cout << "Enter the amount of deposit: ";
	cin >> dollars;
	cin.ignore();
	account.makeDeposit(dollars);

}


// make a method for withdrawal

void withdraw(AccountWithdraw &account) {
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
	const char MAX_CHOICE = '4';
	Account savings;
	char choice;
	AccountBalance save;
	AccountWithdraw savi;
	cout << fixed << showpoint << setprecision(2);
	do {
		displayMenu();
		choice = getChoice(MAX_CHOICE);

		switch (choice) {
		case'1':
			cout << "The current balance is $";
			break;
		
		case'2':
			makeDeposit(save);
			break;
		case'3':
			withdraw(savi);
			break;
		
		}
	} while (choice != '4');
	return 0;
}
//DecoratorChocolate EspressoWithChocolateandMilk(new DecoratorMilk(new Espresso()));
   /* std::cout << EspressoWithChocolateandMilk.price() << std::endl;

    DecoratorMilk CoffeWithMilk(new Coffe());
    std::cout << CoffeWithMilk.price() << std::endl;

    std::cout << std::endl;

    Coffe coffe;
    coffe.reciepe();

    std::cout << std::endl;

    Espresso espresso;
	espresso.reciepe();*/