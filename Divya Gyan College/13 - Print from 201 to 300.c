// 13) WAP that prints the numbers from 201 to 300(use while loop, do while loop).

#include <stdio.h>

int main(){
	printf("\n ======================= PRINT FROM 201 - 300 ====================== \n"); 
	// using while loop
	int number=201;
	printf("\n Using while loop.....\n\n");
	while (number <=300) {
	printf(" %d\t ", number);
	number++;
	}
	// using do while loop;
	printf("\n\n Using Do While loop.....\n\n");
	number=201;
	do {
		printf(" %d\t", number);
		number++;
	} while (number<=300);
	return 0;
}
