//     12. Write a C program to convert the given numbers of days into years, months and days.
//     (years = days/365;   //Ignoring leap year
//         	weeks = (days%365)/7;
//         	days = days- ((years*365) + (weeks*7));

#include <stdio.h>

int main(){
	int days, years, months, weeks, userDefinedDays;
	printf("\n ======================= DAYS => [YEARS / MONTHS / WEEKS / DAYS] ====================== \n"); 
	int a,b,c;
	printf("\n Enter the number of DAYS [D] : "); 
	scanf("%d", &days);
	userDefinedDays = days;
	years = days/365;
	days = days - (years*365);
	months = days/30;
	days = days - (months*30);
	weeks = days/7;
	days = days - (weeks*7);
	printf("\n %d [Days] = %d / %d / %d / %d	i.e.", userDefinedDays, years, months, weeks, days);
	printf("\n\t YEARS  = %d", years);
	printf("\n\t MONTHS = %d", months);
	printf("\n\t WEEKS  = %d", weeks);
	printf("\n\t DAYS   = %d", days);
	return 0;
}
