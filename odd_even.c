//odd or even number
#include <stdio.h>

int main() {
   int number;
   printf("Enter the number:");
   scanf("%d",&number);
   
   if(number%2==0) {
       printf("It is a even number.");
   } else {
       printf("It is odd number.");
   }
}
