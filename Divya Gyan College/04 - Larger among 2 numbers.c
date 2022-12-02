// 4) Find the larger number among the 2 numbers entered by the user using the if else statement.

#include <stdio.h>

int main(){
	float firstNumber, secondNumber;
	printf("\n ======================= LARGE NUMBER AMONG 2 NUMBERS ====================== \n"); 
	// Taking two input numbers from user
	printf("\n Enter the FIRST number [X] : ");
	scanf("%f", &firstNumber);
	printf("\n Enter the SECOND number [Y] : ");
	scanf("%f", &secondNumber);
	
	if (firstNumber>secondNumber) {
		printf("\n %.2f > %.2f", firstNumber, secondNumber);
	} else if(secondNumber>firstNumber) {
		printf("\n %.2f < %.2f", firstNumber, secondNumber);
	} else if (firstNumber == secondNumber) {
		printf("\n %.2f = %.2f", firstNumber, secondNumber);
	}
	return 0;
}
