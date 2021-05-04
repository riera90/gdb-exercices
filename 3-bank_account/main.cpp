#include <stdio.h>

#include "BankAccount.hpp"

int main(int argc, char** argv) {
	BankAccount account;
	int error;
	
	account.credit(500, &error);
	printf("%u\t%i\n", account.getBalance(), error);
	
	account.debit(600, &error);
	printf("%u\t%i\n", account.getBalance(), error);
	
	return 0;
}
