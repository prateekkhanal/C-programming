// 8) Write a program in C to print Fibonacci series for the number of terms entered by the user.

#include <stdio.h>

int main(){
	int a=0, b=1, i;
	unsigned int nthTerm;
	printf("\n ======================= FIBONACCI SERIES TILL THE NTH TERM ====================== \n"); 
	printf("\n Enter the nth term up to which you would like to print the Fibonacci series : ");
	scanf("%u",&nthTerm);
	printf("\n (");
	for (i=0; i<nthTerm; i++) {
		printf(" %d +", a);
		i++;
		if (i == nthTerm) {break;}
		b+=a;
		printf(" %d +", b);
		a+=b;
	}
	printf(" ...)");
	return 0;
}
