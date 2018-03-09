#include <stdio.h>

int main(void) {
	char arr[10];
	int num;
	scanf("%s",arr);
	for(num=0;arr[num]!='\0';num++)
	{
		if(arr[num]>='0' && arr[num]<='9')
		{
			printf("%c",arr[num]);
		}
	}
	return 0;
}
