#include <stdio.h>

int main() {
	long double x;
	printf("Enter value of x: ");
	if (scanf("%Lf", &x) != 1) {
		printf("Invalid input. Please enter a numeric value.\n");
		return 1;
	}

	long double y =   (3*x*x*x*x*x)
			+ (2*x*x*x*x)
			- (5*x*x*x)
			- (x*x)
			+ (7*x) - 6;
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %0.2Lf\n", y);

	return 0;
}
