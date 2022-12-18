// 25) WAP that calls a function whose name is power(). This function takes two arguments(x and y) 
// and returns the value of x to the power y.

#include <stdio.h>
int power(int x, int y); // function prototype

int main(){
	int base, index;
	printf("\n ======================= FUNCTION THAT RETURNS THE POWER ====================== \n"); 
	printf("\n Enter the base [b] : ");
	scanf("%d", &base);
	printf("\n Enter the index [p] : ");
	scanf("%d", &index);
	printf("\n %d ^ %d = %d",base, index, power(base, index));
	return 0;
}

int power(int x, int y) {
	int powerResult=1;
	for (int i=1; i<=y; i++) {
		powerResult*=x;
	}
	return powerResult;
}

