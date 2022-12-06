// 9) Find out whether the number entered by the user is prime or not.
#include <stdio.h>

int main(){
	unsigned long long int number, prime = 1;
	printf("\n ======================= CHECK IF THE GIVEN INTEGER IS A PRIME NUMBER ====================== \n"); 
	printf("\n Enter the INTEGER [X] : ");
	scanf("%lld", &number);
	for (int i=2; i<number; i++) {
		if (number%i == 0) {
			prime = 0;
			break;
		}
	}
	printf("\n \"%lld\" %s a %s.", number, (prime == 1) ? "IS" : "is NOT", (prime == 1) ? "PRIME" : "prime");
	return 0;
}
