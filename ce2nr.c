#include <stdio.h>

int main(){
	
	const double PI = 3.14159;
	double radius;
	double circumference;
	double area;

	printf("\nEnter radius of a circle:");
	scanf("%lf", &radius);

	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	printf("\nThe circumference is 2*%f*", PI);
	printf("%lf which is ", radius);
	printf("%lf\n", circumference);

	printf("\nThe area is %f*", PI);
	printf("%lf^2 which is ", radius);
	printf("%lf\n", area);

	return 0;

}