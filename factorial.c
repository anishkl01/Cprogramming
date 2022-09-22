
//Find factorial of given number.
#include <stdio.h>

int number, i;
int factorial = 1;

void main() {
printf("Enter the number:");
scanf("%d",&number);
for(i =1 ; i<=number; i++) {
    factorial = factorial * i ;
}
printf("%d = %d", number, factorial);
}
