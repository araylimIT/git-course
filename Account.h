#pragma once
class Account {
private:
	double balance, interest, intRate;
	int transactions;
public:
	//Constructor
	Account(double rate = 0.045, double bal = 0.0) {
		balance = bal;
		intRate = rate;
		interest = 0.0;
		transactions = 0;
	}
	//make a method for deposit
	void makeDeposit(double amount) {
		balance += amount;
		transactions++;
	}

	//make a method for withdrawal

	bool withdraw(double amount); // we provide 

	void calculateInterest() {
		interest = balance + intRate;
		balance += interest;

	}

	//now make a method to get balance in main

	double getBalance() {
		return balance;
	}

	// make a method to get interest in main
	double getInterest() {
		return interest;
	}

	//make a method to get transactions in main

	int getTransactions() {
		return transactions;
	}
};
