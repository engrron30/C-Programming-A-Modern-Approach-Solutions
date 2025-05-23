#include <stdio.h>
#include <stdbool.h>

/* HOW TO USE:
 *
 * 	Check Symbol Dimensions:
 *
 *	       CHECK_WIDTH
 *      	<------>
 *
 *		       *   ↑
 *		      *    |
 *		     *	   |	CHECK_HEIGHT
 *		*   *	   |
 *		 * *	   |
 *		  *	   ↓
 *
 *
 * 	(1) Always use bigger CHECK_WIDTH than CHECK_HEIGHT;
 * 	(2) Difference between width and height must not be equal or less than height
 *
 *
*/

#define CHECK_HEIGHT	6
#define CHECK_WIDTH	8
#define CHECK_DIMS_DIFF	CHECK_WIDTH - CHECK_HEIGHT

int main() {
	
	if (CHECK_DIMS_DIFF <= 0 || CHECK_DIMS_DIFF >= CHECK_HEIGHT) {
		printf("Error: Check dimensions are invalid.\n");
		return -1;
	}

	int i, j, dec_for_diff_detect = CHECK_DIMS_DIFF;
	for (i = CHECK_HEIGHT - 1; i >= 0; i--) {
		bool diff_found = false;
		for (j = i + CHECK_DIMS_DIFF - 1; j >= 0; j--) {
			if ( !( 
				(i <= CHECK_DIMS_DIFF) 			&& 
				(j == i + dec_for_diff_detect - 1) 	&& 
				(!diff_found) 
			   )  ) 
			{
				putchar(' ');
			} else {
				if (!diff_found) {
					diff_found = true;
					dec_for_diff_detect -= 1;
					putchar('*');
				}
			}
		}
		putchar('*');
		putchar('\n');
	}
	return 0;
}
