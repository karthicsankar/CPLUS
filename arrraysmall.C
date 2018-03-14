#include<stdio.h>
 
int main() {
   int alpha[9], i,  smallest;
   for (i = 0; i <= 9; i++)
   scanf("%d", &alpha[i]);
   smallest = alpha[0];
   for (i = 0; i <= 9; i++) 
   {
      if (alpha[i] < smallest)
      {
         smallest = alpha[i];
      }
   }
   printf(" %d", smallest);
   return (0);
}
