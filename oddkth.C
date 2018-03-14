#include <stdio.h>

int main(void)
{
	int number,m,i,j,a[10];
	printf("Enter the number of array:");
	scanf("%d %d",&number,&m);
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<number;i++)
	{
		if(a[i]%2!=0)
		{
			
			for(j=i+1;j<number;j++)
			{
				if(a[j]%2!=0)
				{
					printf("%d",a[j]);
					break;
				}
			}
		break;
		}
		
	}
	
	return 0;
}
