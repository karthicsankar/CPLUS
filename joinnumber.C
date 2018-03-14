#include<stdio.h>
int main(void)
{
long int a,b,count=0,pi,temp;
printf("Enter the  two number ");
scanf("%ld %ld",&a,&b);
temp=b;
while(b!=0)
{
b=b/10;
count++;
}
pi=(pow(10,count));
a=a*pi;
sum=a+temp;
printf("%ld",sum);
return 0;
}
