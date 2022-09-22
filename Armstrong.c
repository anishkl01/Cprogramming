//Armstrong number

#include <stdio.h>

int number, result = 0, remainder, originalinteger;

void main() {
printf("Enter three digit number:");
scanf("%d", &number);

originalinteger = number;

while(originalinteger!=0) {
    remainder = originalinteger%10;
    result = result + remainder*remainder*remainder;
    originalinteger = originalinteger/10;
}

if(result == number) {
    printf("It is a Armstrong number %d",number);
} else {
    printf("It is not a Armstrong number %d", number);
}

}
