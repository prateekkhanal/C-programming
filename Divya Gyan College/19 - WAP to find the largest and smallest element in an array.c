// 19 - WAP to find the largest and smallest element in an array.

#include <stdio.h>

int main(){
	int sizeOfArray, largestNumber, smallestNumber;
	printf("\n ======================= FIND THE LARGEST AND SMALLEST ELEMENT IN AN ARRAY ====================== \n"); 
	printf("\n How many elements would you like to store in the array : ");
	scanf("%d", &sizeOfArray);
	int array[sizeOfArray];
	for (int i=0; i<sizeOfArray; i++) {
		printf("\n Enter the elements [%d] : ", i+1);
		scanf("%d", &array[i]);
	}
	printf("\n Array = {");
	for (int i=0; i<sizeOfArray; i++) {
	printf(" %d%s", array[i], (i+1 != sizeOfArray) ? "," : " }");
	}
	largestNumber = array[0], smallestNumber = array[0];
	for (int i=0; i<sizeOfArray; i++) {
		if (array[i]<smallestNumber) {smallestNumber = array[i];}
		if (array[i]>largestNumber) {largestNumber = array[i];}
	}
	printf("\n\n Largest Number = %d\n", largestNumber);
	printf("\n Smallest Number = %d\n", smallestNumber);
	return 0;
}
