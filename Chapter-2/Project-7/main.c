#include <stdio.h>

#define SUCCESS		0
#define FAILURE		-1

/*
 *	Function: calc_left_amount_when_divided
 *	Description:
 *		Accepts two integer: 
 *			(1) The bill to be divided; and
 *			(2) The amount that will divide the bill.
 *		It returns two integers:
 *			(1) Integral quotient between the bill [1] and amount that will divide [2].
 *			(2) Amount remaining.
 */

int divide_amount_to_bills( int amount, int divisor ) {
	int num_of_bills = amount / divisor;
	amount %= divisor;
	return num_of_bills;
}

int main() {
	int user_amount;
	printf("Enter a dollar amount: $");
	if (scanf("%d", &user_amount) != 1) {
		return FAILURE;
	}

	printf("----------------------------\n");
	int bills[4] = { 0 };
		
	bills[0] = user_amount / 20;
	user_amount %= 20;
	bills[1] = user_amount / 10;
	user_amount %= 10;
	bills[2] = user_amount / 5;
	user_amount %= 5;
	bills[3] = user_amount;

	printf("\t$20 bills: 	%d\n", bills[0]);
	printf("\t$10 bills: 	%d\n", bills[1]);
	printf("\t$5 bills:  	%d\n", bills[2]);
	printf("\t$1 bills:  	%d\n", bills[3]);

	return SUCCESS;
}
