#include <stdio.h>
#include<string.h>
int main(void) {
	char st[10];
	printf("Enter the string to be checked: \t");
	scanf("%s",st);
	int len,i,flag=0;
	len=strlen(st);
	for(i=0;i<=len;i++)
	{
		if( (st[i]=='a' || st[i]=='A' || st[i]=='e' || st[i]=='E' || st[i]=='i' || st[i]=='I' || st[i]=='o' || st[i]=='O' || st[i]== 'u' || st[i]=='U'))
		{
		flag=1;
    break;
		}
  }
if(flag==1)
{
    	printf("it contain vowel YES");
}
else
	    printf("NO");
      return 0;
}
