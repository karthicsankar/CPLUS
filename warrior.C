/*ninja warriors program*/
#include <stdio.h>
int main(void)
{
	int kabali[10],oppo[10],c[10];
	int n,i,j;
	printf("enter the number of ninja warriors");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&kabali[i],&oppo[i]);
		c[i]=oppo[i]-kabali[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}
