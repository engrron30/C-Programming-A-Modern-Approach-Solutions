#include <stdio.h>

int main() {
	int x;
	printf("Enter value of x: ");
	scanf("%d", &x);

	long double y = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6;
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %ld\n", y);

	return 0;
}
