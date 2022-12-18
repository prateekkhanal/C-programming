// WAP to sum and average all the elements of an array of size 10. Ask the user for the input

#include <stdio.h>

int main(){
	int array[10], i, sum=0;
	printf("\n ======================= SUM AND AVERAGE OF ELEMENTS OF AN ARRAY ====================== \n"); 
	for (int i=0; i<10; i++) {
		printf("\n Enter the value of element %d: ", i+1);
		scanf("%d", &array[i]);
	}
	for (int i=0; i<10; i++) {
		sum+=array[i];
	}
	float average = (float)(sum)/10;
	printf("\n Sum = %d\n Average = %f", sum, average);
	return 0;
}
