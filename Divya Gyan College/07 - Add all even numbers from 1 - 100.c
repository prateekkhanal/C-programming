// 7) Write a program in C using for loop to add all even numbers from 1 to 100

#include <stdio.h>

int main(){
	int sum=0,temp, i;
	printf("\n ======================= ADD ODD NUMBERS FROM 1 - 100 [USING FOR LOOP] ====================== \n"); 

	for (i=2; i<=100; i+=2) {
		sum+=i;
	}
	printf("\n [");
	for (i=2; i<=100;) {
		printf(" %d", i);
		i+=2;
		if (i<=100) {printf(" +");}
	}
	printf(" ] = %d", sum);
	return 0;
}
