#include <stdio.h>
#include<math.h>
int main(void)
{
	int A,B,C,D;
	printf("Enter the variables:");
	scanf("%d %d %d",&A,&B,&C);             //getting the variables
	D=(A*B)/C;                              //formula used 
	printf(" Result is %d",D);
	return 0;
}
