#include <stdio.h>

void array_printer(int* array, int index) {
	printf("array[%d] = %d\n", index, array[index]);
}

int main(int argc, char** argv) {
	int numbers[1000];
	int user_input;

	for(int i = 0; i < 10000; ++i)
		numbers[i] = i;

	printf("Enter a number [0 to 9999]: ");
	scanf("%d", user_input);

	array_printer(numbers, user_input);
	return 0;
}

//    __
// __( o)>
// \ <_ ) r90
//~~~~~~~~~~~

