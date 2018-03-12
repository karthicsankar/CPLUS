#include <stdio.h>

int main(void) {
	int i;
	char stringg[100];
	printf("Enter string:");
	scanf("%[^\n]s",stringg);
	for(i=0;stringg[i]!='\0';i++)
	{
		if(i==0 )
		{
			if(stringg[i]>='a' && stringg[i]<='z')
			{
				stringg[i]=stringg[i]-32;
				
			}
		}
	          if(stringg[i]==' ')
		{
			++i;
			if(stringg[i]>='a' && stringg[i]<='z')
			{
				stringg[i]=stringg[i]-32;
			}
		}
	}
	printf("%s",stringg);
	return 0;
