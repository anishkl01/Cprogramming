//table program 

#include <stdio.h>

int number;
int i;
int mul;

void main() {
    printf("Enter the number:");
    scanf("%d", &number);

for(i = 1; i<=10; i++) {
    mul = number * i;
    
    printf("%d \n",mul);
}

}
