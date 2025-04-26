#include <stdio.h>

#define SUCCESS		0
#define FAILURE		-1

/*
 *	Function: divide_amount_to_bills
 *	Description:
 *		Accepts two integer: 
 *			(1) The amount to be divided; and
 *			(2) The bill to divide the amount
 *
 *		Returns the amount divided by bill.
 *		The remainder becomes the new amount
 */

int divide_amount_to_bills( int *amount, int divisor ) {
	int num_of_bills = *amount / divisor;
	(*amount) %= divisor;
	return num_of_bills;
}

int main() {
	int user_amount;
	printf("Enter a dollar amount: $");
	if (scanf("%d", &user_amount) != 1) {
		return FAILURE;
	}
	int original_amount = user_amount;

	printf("----------------------------\n");
	int bills[4]     = { 20, 10, 5, 1 };
	int bills_num[4] = { 0 };
	int bills_sum_check = 0;
		
	for (int i = 0; i < 4; i++) {
		bills_num[i] = divide_amount_to_bills(&user_amount, bills[i]);
		printf("\t%d bills: 	%d\n", bills[i], bills_num[i]);
		bills_sum_check += bills[i] * bills_num[i];
	}

	if (bills_sum_check != original_amount) {
		printf("[ERROR] Unbalanced amount %d->%d\n", original_amount, bills_sum_check);
		printf("[ERROR] Where's the %d$?\n", original_amount - bills_sum_check);
		return FAILURE;
	}

	return SUCCESS;
}
