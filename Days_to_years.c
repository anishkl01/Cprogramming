//Days to years, weeks and days
#include <stdio.h>

int days, years, weeks;
void main() {
printf("Enter days:");
scanf("%d",&days);
years = (days/365);
weeks = (days%365)/7;
days = days - ((years*365)+(weeks*7));

printf("Years %d \n",years);
printf("Weeks %d \n",weeks);
printf("Days %d \n",days);
}
