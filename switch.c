#include <stdio.h>

int main(){
	
	// switch - A more efficent alternative to many else if statements
	// 	allows for a value to be tested for equaltiy against many cases

	char grade;

	printf("\nEnter a letter grade: ");
	scanf("%c", &grade);

	switch(grade){
		case 'A':
			printf("perfect!\n");
			break; // to exit out of our switch, otherwise all cases exeutes.
		case 'B':
			printf("You did good!\n");
			break;
		case 'C':
			printf("You did okay!\n");
			break;
		case 'D':
			printf("At least it's not an F!\n");
			break;
		case 'F':
			printf("YOU FAILED!!\n");
			break;	
		default:
			printf("Please enter only valid grades"
	}

	return 0;
}