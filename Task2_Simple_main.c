
#include <stdio.h>



int main()
{
	int number = 73;
	int counter = 0;
	printf("Enter some positive number\n");
	scanf_s("%d", &number);
	for (int i=1; i < number; i++) {
		if (number % i == 0) {
			counter++;
		}
		if (counter > 2) {
			break;
		}

	if (counter < 3) {
		printf("Number %d is simple\n", number);
	}
	else {
		printf("Number %d is not simple\n", number);
	}

	return 0;
}