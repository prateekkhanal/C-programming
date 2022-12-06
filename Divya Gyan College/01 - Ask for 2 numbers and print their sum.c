/*
	1) Write a program in C to ask for 2 numbers and display their sum. (Make use of all the basic data
	types)
	int, unsigned int, short int, long int, float, double, long double.
*/
#include <stdio.h>
int main(){
	printf("\n ======================= PRINT THE SUM OF 2 NUMBERS ====================== \n"); 
	int n1, n2,sum;
	printf("\n Enter the FIRST number [X] : ");
	scanf("%d", &n1);
	printf("\n Enter the SECOND number [Y] : ");
	scanf("%d", &n2);
	// printing the INTEGER type variable
	printf("\n %d + %d = %d\t\t\\\\Integer",n1, n2, n1+n2);
	sum=n1+n2;
	// printing the UNSIGNED INTEGER type variable
	unsigned int sumU=sum, n1U=n1, n2U=n2;
	printf("\n %u + %u = %u\t\t\\\\Unsigned Integer", n1U, n2U, sumU);
	// printing the SHORT INTEGER type variable
	short int sumHI=sum, n1HI=n1, n2HI=n2;
	printf("\n %hi + %hi = %hi\t\t\\\\Short Integer",n1HI, n2HI, sumHI);
	// printing the LONG INTEGER type variable
	long int sumLI=sum, n1LI=n1, n2LI=n2;
	printf("\n %li + %li = %li\t\t\\\\Long Integer", n1LI, n2LI, sumLI);
	// printing the FLOAT type variable
	float sumF=sum, n1F=n1, n2F=n2;
	printf("\n %f + %f = %f\t\t\\\\Float", n1F, n2F, sumF);
	// printing the DOUBLE type variable
	double sumD=sum, n1D=n1, n2D=n2;
	printf("\n %lf + %lf = %lf\t\t\\\\Double", n1D, n2D, sumD);
	// printing the LONG DOUBLE type variable
	long double sumLf=sum, n1Lf=n1, n2Lf=n2;
	printf("\n %Lf + %Lf = %Lf\t\t\\\\Long Double", n1Lf, n2Lf, sumLf);
	return 0;
}
