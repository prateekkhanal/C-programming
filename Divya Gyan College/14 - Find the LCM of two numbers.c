// 14) Write a program to find the LCM of two numbers entered by the user.

#include <stdio.h>

int main(){
	printf("\n ======================= FIND THE LCM OF 2 NUMBERS ====================== \n"); 
	int firstNumber, secondNumber, lcm;
	printf("\n Enter the FIRST integer [X] : ");
	scanf("%d", &firstNumber);
	printf("\n Enter the SECOND integer [Y] : ");
	scanf("%d", &secondNumber);
	(firstNumber>secondNumber) ? (lcm = firstNumber) : (firstNumber<secondNumber) ? (lcm = secondNumber) : (lcm = firstNumber);
	while (1) {
		if ((lcm%firstNumber==0) && (lcm%secondNumber)==0) { break; }
		lcm++;
	}
	printf("\n LCM of \"%d\" and \"%d\" = %d", firstNumber, secondNumber, lcm);
	return 0;
}
