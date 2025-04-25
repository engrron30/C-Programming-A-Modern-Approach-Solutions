#include <stdio.h>

int main () {
	float user_num;
	printf("Enter amount:   $");
	scanf("%f", &user_num);

	printf("---------------------------\n");
	float tax_added = user_num * 1.05;
	printf("With Tax Added: $%.2f\n", tax_added);

	return 0;
}
