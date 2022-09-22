
//Find number is prime or not.
#include <stdio.h>

int number, i, flag = 0;

void main() {
printf("Enter a positive integer:");
scanf("%d", &number);

for(i = 2; i<=number/2; i++) {
    if(number%i==0) {
        flag = 1; 
        break;
    }
}
if(flag == 0) {
    printf("It is a prime number %d", number);
} else {
     printf("It is not a prime number %d", number);
}
}
