#include <stdio.h>

int main() {

	int mm, dd, yyyy;
	printf("Enter a date (mm/dd/yyyy): ");
	if (scanf("%d/%d/%d", &mm, &dd, &yyyy) != 3) {
		perror("Scanf error.");
		return -1;
	}

	if (!(	(mm > 0)   || (mm <= 12) ||
		(dd > 0)   || (dd <= 31) ||
		(yyyy > 0) || (yyyy <= 9999)	)) {
		printf("Invalid year\n");
		return -1;
	}
	printf("Date: %d/%d/%d\n", yyyy, mm, dd);

	return 0;
}
