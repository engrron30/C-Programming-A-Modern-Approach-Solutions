#include <stdio.h>

/*
 *	Chapter 2: Project 2
 *	Volume of a sphere
 */

#define PI		3.14159

int ask_user_for_rad( void ) {
	int radius;
	printf("Enter value of radius: ");
	scanf("%d", &radius);
	return radius;
}

int main() {
	int sphr_rad = ask_user_for_rad();
	float sphr_vol = 1;

	for (int i = 0; i < 3; i++) {
		sphr_vol *= sphr_rad;
	}

	sphr_vol *= (4.0f / 3.0f) * PI; 
	printf("Volume [sphere with r = %d] = %lf\n", sphr_rad, sphr_vol);

	return 0;
}
