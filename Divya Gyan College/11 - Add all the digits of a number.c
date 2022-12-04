// 11) Write a program in C to add all the digits of a number entered by the user.

#include <stdio.h>
#include <math.h>

int main(){
	printf("\n ======================= ADD ALL THE DIGITS OF A NUMBER ====================== \n"); 
	int number, sum=0, duplicateNumber, numberOfDigits, i;
	printf("\n Enter a number [X] : ");
	scanf("%d", &number);
	// getting the number of digits in the number
	for (i=0, duplicateNumber = number; duplicateNumber!=0; i++) {
			duplicateNumber/=10;
			numberOfDigits=i+1;
	}
	duplicateNumber = number;
	printf("\n ");
	for (int j=1; duplicateNumber!=0; j++){
		sum+=duplicateNumber%10;
		duplicateNumber/=10;
		printf("%s %d %s", (j==1) ? "[" : "",(number/(int)(pow(10,numberOfDigits-j)))%10, (duplicateNumber!=0) ? "+" : "] = ");
	}
	printf("%d", sum);
	return 0;
}
