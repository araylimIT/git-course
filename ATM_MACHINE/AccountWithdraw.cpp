#include "AccountWithdraw.h"

bool AccountWithdraw::withdraw(double amount)
{
	if (balance < amount) {
		return false;
	}
	else {
		balance -= amount;
		return true;
	}
}
