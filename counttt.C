#include <stdio.h>

int main(void)
{
	int number,count=1;
	printf("Enter the digit:");
	scanf("%d",&number);
	while(number!=0)                //running of while loop
	{
		number=number/10;
		if(number!=0)
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
