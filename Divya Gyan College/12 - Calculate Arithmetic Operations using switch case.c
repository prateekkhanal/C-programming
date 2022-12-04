/* 12) WAP to calculate sum, difference, product, division of two numbers. Your program should
   display the list of options from which the user selects one of them. (Use switch case)
   a. Add b. Subtract c. Product d. Division */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int firstNumber, secondNumber;
	char option;
	printf("\n Enter the FIRST number [X] : ");
	scanf("%d", &firstNumber);
	printf("\n Enter the SECOND number [Y] : ");
	scanf("%d", &secondNumber);
	printf("\n The operations : \n \t\t a. Addition\n\t\t b. Subraction\n\t\t c. Product\n\t\t d. Division\n\n Enter option [in alphabet] : ");
	fflush(stdin);
	scanf("%c", &option);
 	switch (option) {
 		case 'a': 
 			printf("\n %d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
 			break;
 		case 'b':
 			printf("\n %d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
 			break;
 		case 'c':
 			printf("\n %d * %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
 			break;
 		case 'd':
 			printf("\n %d / %d = %d", firstNumber, secondNumber, firstNumber / secondNumber);
 			break;
 		default:
 			printf("\n\n INVALID INPUT!!");
 	}
	return 0;
}
