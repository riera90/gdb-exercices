#ifndef BANK_ACCOUNT_HPP
#define BANK_ACCOUNT_HPP

class BankAccount {
private:
	unsigned int balance_;

public:
	BankAccount();
	unsigned int getBalance();
	void credit(unsigned int ammount, int* retval);
	void debit(unsigned int ammount, int* retval);
};

#endif
