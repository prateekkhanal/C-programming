// 15) Write a program to find the HCF of two numbers entered by the user.

#include <stdio.h>

int main(){
	printf("\n ======================= FIND THE HCF OF 2 NUMBERS ====================== \n"); 
	int firstNumber, secondNumber, hcf;
	printf("\n Enter the FIRST number [X] : ");
	scanf("%d", &firstNumber);
	printf("\n Enter the SECOND number [Y] : ");
	scanf("%d", &secondNumber);
	(firstNumber<secondNumber) ? hcf = firstNumber : (firstNumber > secondNumber) ? hcf = secondNumber : (hcf = firstNumber);
	while (hcf>=1) {
		if ((firstNumber%hcf==0) && (secondNumber%hcf==0)) { break; }
		hcf--;
	}
	printf("\n HCF of \"%d\" and \"%d\" = %d", firstNumber, secondNumber, hcf);
	return 0;
}
