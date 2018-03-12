include <stdio.h>
#include<math.h>
int main(void) 
{
	int n,m,result;
	printf("Enter the string:");
	scanf("%d %d",&n,&m);
	result=pow(n,m);
	printf("The result is %d",result);
	return 0;
}
