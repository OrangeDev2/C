#include <stdio.h>
#include <ctype.h>

int main(){
	float temp;
	char unit;

	printf("\nIs this temperature in (F) or (C)?");
	scanf("%c", &unit);

	unit = toupper(unit);

	switch(unit){
		case 'C':
			printf("\nEnter the temp in C ");
			scanf("%f", &temp);

			temp = (temp * 9/5) + 32;

			printf("Temp in (F) is %f", temp);
			break;
		case 'F':
			printf("\nEnter the temp in F ");
			scanf("%f", &temp);

			temp = (temp - 32) * 5/9;

			printf("Temp in (C) is %f", temp);
			break;
		default:
			printf("Please enter valid unit (C) or (F)");
	}

	return 0;
}