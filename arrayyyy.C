#include <stdio.h>
int main(void)
{
	int number,m,i,count=0,a[10];
	scanf("%d %d",&number,&m);
    for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<number;i++)
	{
		if(a[i]==m)
		{
			
			count=count+1;
		
		}
		
	}
	printf("%d",count);
	return 0;
}
