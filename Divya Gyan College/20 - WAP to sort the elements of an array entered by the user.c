// 20) WAP to sort the elements of an array entered by the user. You can use the array size of 10.

#include <stdio.h>
#define sizeOfArray 10

int main(){
	int array[10]; // {13, 1, -7, 0, 12, -24, 3, 4, 32, 2};
	// taking 10 integers input from user
	for (int i=0; i<sizeOfArray; i++) {
		printf("\n Enter the Element of the Array [%d] : ", i+1);
		scanf("%d", &array[i]);
	}
	// sorting the array in ascending order
	for (int i=sizeOfArray-1; i>0; i--) {
		for (int j=0; j<i; j++) {
			if (array[j] > array[j+1]) {
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;;
			}
		}
	}
	printf("\n Sorted Array = [");
	for (int i=0; i<sizeOfArray; i++) {
		printf(" %d%s", array[i], (i+1==sizeOfArray) ? " ]" : ",");
	}
	return 0;
}
