#include <stdio.h>
#include<string.h>
int main(void) {
	char word[10];
	int num;
	scanf("%s",word);
	num=strlen(word);
	if(num%2==0)
	{
		word[num/2]='*';
		word[(num/2)-1]='*';
	}
	else
	{
		word[num/2]='*';
	}
	printf("%s",word);
	return 0;
}
