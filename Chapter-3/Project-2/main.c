#include <stdio.h>

int main() {
	int item_no;
	float unit_price;
	char date[11];

	printf("Enter item number: ");
	if (scanf("%d", &item_no) != 1) {
		perror("scanf failed");
		return -1;
	}

	printf("Enter unit price: ");
	if (scanf("%f", &unit_price) != 1) {
		perror("scanf failed");
		return -1;
	}
	char float_to_str[20];
	sprintf(float_to_str, "%.2f", unit_price);

	printf("Enter purchase date: ");
	if (scanf("%s", date) != 1) {
		perror("scanf failed");
		return -1;
	}

	printf("%8s %8s %12s\n", 
			"Item", "Unit", "Purchase");
	printf("%8s %8s %12s\n",
			"", "Price", "Date");
	printf("--------------------------------------\n");
	printf("%8d $%7s %12s\n", 
			item_no, float_to_str, date);
	return 0;

}
