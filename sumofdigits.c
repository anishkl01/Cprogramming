
//Find the sum of digits of given number.
#include <stdio.h>

int number, sum = 0, remainder, originalinteger;

void main() {
printf("Enter an number:");
scanf("%d", &number);

originalinteger = number;

while(originalinteger!=0) {
    remainder = originalinteger%10;
    sum = sum + remainder;
    originalinteger = originalinteger/10;
}
printf("Sum of digits of %d = %d", number, sum);

}
