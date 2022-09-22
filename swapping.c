//Swap two integer without using third variable
#include <stdio.h>

int num1, num2;

void main() {
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);

num1 = num1+num2;
num2 = num1-num2;
num1 = num1-num2;

printf("%d %d",num1,num2);
    
}
