#include <stdio.h>

#include<math.h>

int main(void) 

{

	int number,a,d,s;

	int N,D,A,S;

	printf("\nEnter the number of terms:");

	scanf("%d",&number);

	printf("\nEnter the start value:");

	scanf("%d",&a);

	printf("\nEnter the difference:");

	scanf("%d",&d);

	N=number-1;

	D=N*d;

	A=2*a;

	S=A+D;

	s=S*number-1/2;

	printf("\n%d",s);

	return 0;

}
