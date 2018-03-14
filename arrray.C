#include <stdio.h>

int main(void)
{
	int number,m,i,flag=0;
	printf("Enter the array size and element to be finded:");
	scanf("%d %d",&number,&m);
	int a[10];
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<number;i++)
	{
		if(a[i]==m)
		{
			printf("yes");
			flag=1;
			break;
		}
		
	}
	if(flag==0)
	{
		printf("no");
	
	}
	return 0;
}
