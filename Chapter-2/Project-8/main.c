#include <stdio.h>
#include <stdlib.h>

typedef struct loan_detls {
	float loan_amt;
	float int_rate;
	float mnthly_pmnt;
} loan_detls_t;

int ask_input_from_usr( char	*query_msg,
			float	*loan_data )
{
	printf("Enter %s: ", query_msg);
	if (scanf("%f", loan_data) != 1) {
		perror("Scanf error.\n");
	}

	return 0;
}

int find_bal_after_mnthly_pmnt( char 	     *cardi_val,
				loan_detls_t *loan_dets) {	
	float balance = (loan_dets->loan_amt * (1 + loan_dets->int_rate)) - loan_dets->mnthly_pmnt;
	printf("Balance after %s payment: %0.2f\n", cardi_val, balance);
	return balance;
}

void display_loan_dets(loan_detls_t *loan_dets) {
	printf("\n");
	printf("###############################\n");
	printf("###\n");
	printf("###    amt 	   = %0.2f\n", loan_dets->loan_amt);
	printf("###    int_rate    = %0.4f\n", loan_dets->int_rate);
	printf("###    mnthly_pmnt = %0.2f\n", loan_dets->mnthly_pmnt);
	printf("###\n");
	printf("###############################\n");
	printf("\n");
}

int main() {
	// Point to NULL then malloc
	loan_detls_t *usr_loan = NULL;
	usr_loan = malloc(sizeof(*usr_loan));
	if (usr_loan == NULL) {
		perror("Failed to allocate memory");
		return -1;
	}

	ask_input_from_usr("amount of loan",  &usr_loan->loan_amt);
	ask_input_from_usr("interest rate",   &usr_loan->int_rate);
	ask_input_from_usr("monthly payment", &usr_loan->mnthly_pmnt);

	usr_loan->int_rate /= (100 * 12);
	display_loan_dets(usr_loan);
	
	char *cardi_arr[3] = {"first", "second", "third"};
	for (int i = 0; i < 3; i++) {
		usr_loan->loan_amt = find_bal_after_mnthly_pmnt(cardi_arr[i], usr_loan);
	}

	return 0;
}
