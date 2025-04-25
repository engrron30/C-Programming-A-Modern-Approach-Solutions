#include <stdio.h>

/*
 *	Chapter 2: Project 2
 *	Volume of a sphere
 */

#define SPHR_RAD	10
#define PI		3.14159

int main() {
	float sphr_vol = 1;

	for (int i = 0; i < 3; i++) {
		sphr_vol *= SPHR_RAD;
	}

	sphr_vol *= (4.0f / 3.0f) * PI; 
	printf("Volume [sphere with r = %d] = %lf\n", SPHR_RAD, sphr_vol);

	return 0;
}
