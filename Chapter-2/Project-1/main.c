#include <stdio.h>

#define CHECK_SYMBOL_HEIGHT	6
#define CHECK_SYMBOL_WIDTH	8

int main() {
	int i, j;
	for (i = 0; i < CHECK_SYMBOL_HEIGHT; i++) {
		/*for (j = CHECK_SYMBOL_WIDTH - 1; j >= 0; j--) {
			printf(" ");
		}*/
		printf("*");
		printf("\n");
	}
	return 0;
}
