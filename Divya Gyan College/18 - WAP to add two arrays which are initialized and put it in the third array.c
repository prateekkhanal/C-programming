// 18 - WAP to add two arrays which are initialized and put it in the third array. Use an array of size 5.

#include <stdio.h>

int main(){
	int array1[5] = {1,2,3,4,5}, array2[5] = {6,7,8,9,10}, array3[5];
	printf("\n ======================= ADD 2 ARRAYS AND STORE SUMS INTO A THIRD ARRAY ====================== \n"); 
	for (int i=0; i<5; i++) {
		array3[i] = array1[i] + array2[i];
	}
	printf("\n Array3 = {%d, %d, %d, %d, %d}", array3[0],  array3[1],  array3[2],  array3[3],  array3[4]);
	return 0;
}
