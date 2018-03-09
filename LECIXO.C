#include <stdio.h>

int main(void)
{
	char a[10];
	int NUM,i;
	scanf("%s",a);
	NUM=strlen(a);
	for(i=NUM-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}
