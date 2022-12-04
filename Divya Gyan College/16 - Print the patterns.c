/*
 16) Write a program to generate the following output.
 1 
 1  2 
 1  2  3 
 1  2  3  4 
 1  2  3  4  5 

 1 
 2  2 
 3  3  3 
 4  4  4  4 
 5  5  5  5  5 

 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 

 *  *  *  *  * 
 *  *  *  * 
 *  *  * 
 *  * 
 *

         * 
       * * * 
     * * * * * 
   * * * * * * * 
 * * * * * * * * *

*/

#include <stdio.h>

int main(){

	for (int i=1; i<=5; i++) {
		printf("\n\n\t");
		for (int j=1; j<=i; j++) {
			printf("%d\t", j);
		}
	}

	printf("\n\n\n");

	for (int i=1; i<=5; i++) {
		printf("\n\n\t");
		for (int j=1; j<=i; j++) {
			printf("%d\t", i);
		}
	}

	printf("\n\n\n");

	printf("\n\n\n");
 	for (int i=1; i<=5; i++) {
 		printf(" \n\n\t");
 		for (int j=1; j<=i; j++) {
 			printf("*\t");
 		}
 	}

	printf("\n\n\n");
 
   for (int i=5; i>=0; i--) {
   	printf("\n\n\t");
   	for (int j=1; j<=(5-i); j++) {
   		printf("\t");
   	} 
   	for (int k=1; k<=i; k++) {
   		printf("*\t");
   	}
   }

int numberOfRows=5, rowsToPrint=numberOfRows;
for (int i=1; i<=numberOfRows; i++) {
		printf("\n\t");
	for (int j=3*(numberOfRows-i); j>0; j--) {
		printf(" ");
	}
	for (int k=1; k<=(2*i-1); k++) {
		printf("*  ");
	}
}
	return 0;
}
