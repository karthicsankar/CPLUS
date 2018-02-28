#include <stdio.h>
#include<string.h>
int main(void) {
	char st[10];
	printf("Enter the string to be checked: \t");
	scanf("%s",st);
	int len,i,j,flag=0;
	len=strlen(st);
	for(i=0,j=len-1;i<=len/2;i++,j--)
	{
		
		if(st[i]!=st[j])
		{
			printf("\n Nope ,not a palindrome");
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	{
		printf("\n Yes its a palindrome");
	}
	
	

	return 0;
}
