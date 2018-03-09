#include <stdio.h>

int main(void)
{
	int num,arr,sum=0,i;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr);
		sum=sum+arr;
	}
	printf("total is %d",sum);
	
	return 0;
}
