#include <iostream.h>
using namespace std
int main()
{
	int i;
	char s1[10],s2[10];
	cin>>s1;
	cin>>s2;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
		{
			cout<<("%s is greater",s1);
			break;
		}
		else if(s1[i]<s2[i])
		{
			cout<<("%s is greater",s2);
			break;
		}
		else
		{
			cout<<("both are equal");
			break;
		}
	}
	return 0;
}
