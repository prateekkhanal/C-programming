// 21) WAP to sort the elements of an array entered by the user using selection sort.

#include <stdio.h>

int main(){
	int sizeOfArray;
	printf("\n Enter the number of elements of the Array [n] : ");
	scanf("%d", &sizeOfArray);
	int array[sizeOfArray];
	for (int i=0; i<sizeOfArray; i++) {
		printf("\n Enter the element of the Array [%d] : ", i+1);
		scanf("%d", &array[i]);
	}
	// sorting using selection sort method
	// getting of the index of the largest number in the array
	// and swapping it with the last element of the array
	for (int i=0; i<sizeOfArray; i++) {
		int largestIndex = 0;
		for (int j=0; j<sizeOfArray-i; j++) {
			if (array[j] > array[largestIndex]) {
				largestIndex = j;
			}
		}
		int temp = array[largestIndex];
		array[largestIndex] = array[sizeOfArray-i-1];
		array[sizeOfArray-i-1] = temp;
	}
	printf("\n Sorted Array = [");
	for (int i=0; i<sizeOfArray; i++) {
		printf(" %d%s", array[i], (i+1==sizeOfArray) ? " ]" : ",");
	}
	printf("\n");
	return 0;
}
