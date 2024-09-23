#include <stdio.h>

int main() {
   int n, r = 0;
   printf("Enter a number: ");
   scanf("%d", &n);
   for (; n!= 0; n/= 10) {
      r= r*10+ n%10;
   }
   printf("The reverse of the number is: %d\n", r);
   return 0;
}

