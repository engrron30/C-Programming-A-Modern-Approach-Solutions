#include <stdio.h>

#define CHECK_SYMBOL_HEIGHT	6
#define CHECK_SYMBOL_WIDTH	8

int main() {
	int i, j;
	for (i = CHECK_SYMBOL_HEIGHT; i >= 0; i--) {
		for (j = i + 2; j >= 0; j--) {
				printf(" ");
		}
		printf("*");
		printf("\n");
	}
	return 0;
}
