#include <stdio.h>
#include <stdlib.h>

int fibonacci(int i) {
	return i <= 1 ? i : (fibonacci(i-1) + fibonacci(i-2));
}

int main(int argc, char** argv) {
	for (int i = 10; i >= 0; i--)
		printf("fibonacci de %i es %i\n", i, fibonacci(i));	
	return 0;
}
