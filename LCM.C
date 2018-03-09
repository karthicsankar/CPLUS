#include <stdio.h>

int main(void) {
	int num1,num2,LCM;
	scanf("%d %d",&num1,&num2);
	LCM=(num1>num2)?num1:num2;
	while(1)
	{
		if(LCM%num1==0 && LCM%num2==0)    //logical operator AND
		{
			printf("\nLCM=%d",LCM);
			break;
		}
	++LCM;
	}
	return 0;
}
