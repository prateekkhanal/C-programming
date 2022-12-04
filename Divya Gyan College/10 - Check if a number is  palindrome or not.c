// 10) WAP to find whether a number is palindrome or not using recursion.

#include <stdio.h>
#include <math.h>

int main(){
	 int number, duplicateNumber, count = 0, reversedNumber=0;
	 printf("\n Enter a number [x] : ");
	 scanf("%d", &number);
	 duplicateNumber = number;
	 while (duplicateNumber!=0) {
	 	reversedNumber=reversedNumber*10+duplicateNumber%10;
	 	count++;
	 	duplicateNumber/=10;
	 }
	 printf("\n \"%d\" %s \"%d\"\t Hence, It %s a Palindrome.", number, (number==reversedNumber) ? "==" : "!=", reversedNumber, (number==reversedNumber) ? "IS" : "is NOT");
	 return 0;
}
