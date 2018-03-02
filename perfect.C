#include <stdio.h>

int main(void) {
	int n,m,o,i,p,flag=0;
	printf("Enter two number:");
	scanf("%d %d",&n,&m);
	o=m*n;
	for(i=1;i<=o/2;i++)
	{
	
		if((i*i)==o)
		{
		    flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	printf("no");
	else
	printf("yes");
	return 0;
}
