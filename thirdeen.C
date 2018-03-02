#include<stdio.h>
int main()
{
int num;
printf("Enter a number:\t");
scanf("%d",&num);
printf("\n");

if(num%13==0)
{
 printf("Yes");   
}
else 
{
    printf("No");
}

return 0;
}
