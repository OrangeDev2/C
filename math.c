#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
	double A = sqrt(9);
	
	printf("result: %lf\n", A);

	A = ceil(4.5);

	printf("result: %lf\n", A);

	A = floor(4.5);

	printf("result: %lf\n", A);

	A = sin(45);

	printf("result: %lf\n", A);

	return 0;
}