#include <stdio.h>

#define CHECK_HEIGHT	6
#define CHECK_WIDTH	8
#define CHECK_DIMS_DIFF	CHECK_WIDTH - CHECK_HEIGHT

int main() {
	int i, j;
	for (i = CHECK_HEIGHT - 1; i >= 0; i--) {
		for (j = i + CHECK_DIMS_DIFF - 1; j >= 0; j--) {
			// print * if (i is 1 or 2) and (j is 1 or 2)
			if (!((i == 2 && j == 3) || (i == 1 && j == 1))) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("*");
		printf("\n");
	}
	return 0;
}
