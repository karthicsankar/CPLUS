#include <stdio.h>
 
int main(void) 
{
	int num1,num2,i,GCD;
	scanf("%d %d",&num1,&num2);
	for(i=1;i<=num1 && i<=num2; ++i)
	//note that after initialisation of i it gets incremented and then enters the loop
	{
		if(num1%i==0 && num2%i==0)
		{
			GCD=i;
		}
	}
	printf("GCD=%d",GCD);
 
	return 0;
}
