#include <stdio.h>
#include <stdbool.h>

/*
 * NOTE:
 * 	(1) Always use bigger CHECK_WIDTH than CHECK_HEIGHT;
 * 	(2) Difference between width and height must not be equal or less than height
*/

#define CHECK_HEIGHT	4
#define CHECK_WIDTH	9
#define CHECK_DIMS_DIFF	CHECK_WIDTH - CHECK_HEIGHT

int main() {
	int i, j, dec_for_diff_detect = CHECK_DIMS_DIFF;
	for (i = CHECK_HEIGHT - 1; i >= 0; i--) {
		bool diff_found = false;
		for (j = i + CHECK_DIMS_DIFF - 1; j >= 0; j--) {
			if (!( (i <= CHECK_DIMS_DIFF) && (j == i + dec_for_diff_detect - 1) && (i != 0) && (!diff_found))) {
				printf(" ");
			} else {
				if (!diff_found) {
					diff_found = true;
					dec_for_diff_detect -= 1;
					printf("*");
				}
			}
		}
		printf("*");
		printf("\n");
	}
	return 0;
}
