//Palindrome or not
#include <stdio.h>

int n, integer = 0, remainder, originalinteger;

void main() {

printf("Enter a integer:");
scanf("%d", &n);
originalinteger = n;

while(n!=0) {
    remainder = n%10;
    integer = integer*10+remainder;
    n = n/10;
}
if(originalinteger == integer) {
    printf("It is a palindrome %d", originalinteger);
} else {
    printf("It is not a palindrome %d", originalinteger);
}
}

