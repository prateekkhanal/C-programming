// 3) Write a program in C to take the rate and quantity of 2 items in floating point and calculate the
// average value of the items. The result should be in floating point with only two decimal values.

#include <stdio.h>

int main(){
	float  quantityOfItem1, quantityOfItem2, rateOfItem1, rateOfItem2, average;
	printf("\n ======================= AVERAGE PRICE OF TWO TYPES OF ITEMS ====================== \n"); 
	printf("\n Enter the QUANTITY of ITEM1 [Q1] : ");
	scanf("%f", &quantityOfItem1);
	printf("\n Enter the RATE per unit of ITEM1 [R1] : ");
	scanf("%f", &rateOfItem1);
	printf("\n Enter the QUANTITY of ITEM2 [Q2] : ");
	scanf("%f", &quantityOfItem2);
	printf("\n Enter the RATE per unit of ITEM2 [R2] : ");
	scanf("%f", &rateOfItem2);
	average = ((quantityOfItem1 * rateOfItem1) + (quantityOfItem2 * rateOfItem2) ) / (rateOfItem1 + rateOfItem2);
	printf("\n Average of the Items [%.0f] = %.2f", (rateOfItem1 + rateOfItem2), average);
	return 0;
}
