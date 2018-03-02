#include<stdio.h>
int main(void)
{
int num,in,flag=0;
printf("Enter a number");
scanf("%d",&num);
for(in=2;in<=num/2;in++)
{
printf("\n I is %d",in);
if(num%in==0)
{
 printf("\n I 2 is %d",in);   
flag=1;
printf("\nflag occured one so existing the loop");
break;
}
}
if(flag==0)
{
printf("\n No");
}
else
{
printf("\n Yes");
}
return 0;
}
