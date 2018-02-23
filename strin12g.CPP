#include <stdio.h>
#include<string.h>
int main(void) {
	char v[100];
	gets(v);
	int count=1;
	for( int i=0;v[i]!='\0';i++)
	{
		if(v[i]==' ')
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
