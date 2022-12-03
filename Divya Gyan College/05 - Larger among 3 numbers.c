// 5) Find the largest among the three numbers entered by the user. Use nested if else statements.

#include <stdio.h>

int main(){
	float firstNumber, secondNumber, thirdNumber;
	printf("\n ======================= LARGEST AMONG 3 NUMBERS ====================== \n"); 
	// Taking three numbers as user inputs
	printf("\n Enter the FIRST number [X] : ");
	scanf("%f", &firstNumber);
	printf("\n Enter the SECOND number [Y] : ");
	scanf("%f", &secondNumber);
	printf("\n Enter the THIRD number [Z] : ");
	scanf("%f", &thirdNumber);
	
	if (firstNumber>secondNumber) {
		if (firstNumber > thirdNumber) {
			printf("\n %.2f is the greatest.", firstNumber);
		} else {
			printf("\n %.2f is the greatest.", thirdNumber);
		} 
	} else if (secondNumber > thirdNumber) {
		if (secondNumber > firstNumber) {
			printf("\n %.2f is the greatest", secondNumber);
		} else {
			printf("\n %.2f is the greatest.", firstNumber);
		}
	} else if (thirdNumber > firstNumber) {
		if (thirdNumber > secondNumber) {
			printf("\n %.2f is the greatest.", thirdNumber);
		} else {
			printf("\n %.2f is the greatest.", secondNumber);
		}
	} else if (firstNumber==secondNumber && secondNumber==thirdNumber) {
		printf("\n All of the three numbers are equal. Hence either there is not largest number, or all of them are the largest.");
	}
	return 0;
}
