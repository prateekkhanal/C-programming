// 26 - WAP that uses a function called isprime(). This function takes a no. as an argument and returns 
// either 0 or 1. The function returns 1 if the given argument is prime otherwise 0.

#include <stdio.h>
#include <stdbool.h>
int isprime(int x);

int main(){
	int number;
	printf("\n ======================= FUNCTION THAT CHECKS IF A NUMBER IS A PRIME ====================== \n"); 
	printf("\n Enter the number [X] : ");
	scanf("%d", &number);
	printf("\n \"%d\" %s a Prime.", number, (isprime(number) == 1) ? "IS" : "is NOT");
	return 0;
}

int isprime(int x) {
	bool prime = true;
	for (int i = 2; (x==1)||(i<x); i++) {
		if ((x == 1) || (x%i==0)) {prime = false; break;}
	}
	if (prime) { return 1; } else { return 0; } 
}
