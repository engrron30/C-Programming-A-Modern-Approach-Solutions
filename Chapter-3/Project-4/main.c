#include <stdio.h>

typedef struct tel_num_s {
	char num_prefix_3[4];
	char num_middle_3[4];
	char num_last_4[5];
} tel_num_t;

int query_tel_num_parts(tel_num_t *tel_num) {
	int rv = -1;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");

	scanf("(%3s) %3s-%4s", tel_num->num_prefix_3,
			       tel_num->num_middle_3,
			       tel_num->num_last_4);
	rv = 0;
exit:
	return rv;
}

int displ_tel_num_parts(tel_num_t tel_num) {
	int rv = -1;
	printf("You entered %3s.%3s.%4s\n",
			tel_num.num_prefix_3,
			tel_num.num_middle_3,
			tel_num.num_last_4);

	rv = 0;

exit:
	return rv;
}

int main() {
	tel_num_t tel_eg;
	query_tel_num_parts( &tel_eg );
	displ_tel_num_parts( tel_eg );

	return 0;
}
