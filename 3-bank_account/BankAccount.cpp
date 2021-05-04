#include "BankAccount.hpp"

BankAccount::BankAccount() {}

unsigned int BankAccount::getBalance() {
	return this->balance_;
}

void BankAccount::credit(unsigned int ammount, int* retval) {
	retval = 0;
	this->balance_ += ammount;
}

void BankAccount::debit(unsigned int ammount, int* retval) {
	retval = 0;
	this->balance_ -= ammount;
}
