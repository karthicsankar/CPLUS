#include<stdio.h>
#include<string.h>
int main() 
{	
   char input[10],output[10];
   int length;
   printf("Enter the string:");
   scanf("%s",input);
   length=strlen(input);
   for( int i=0;i<length;i=i+2)
   {
     printf("%c",input[i]);
   }
   printf(" ");
   for(int i=1;i<length;i=i+2)
   {
      printf("%c",input[i]);
   }
 return 0;
}
