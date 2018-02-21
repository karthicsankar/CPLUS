#include<iostream>
#include<string.h>
using namespace std;
int main(void) 
{
	int n,sum=0,a;
	cout<<"Enter the numbers";
	cin>>n;
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	cout<<"\n"<<sum;
	return 0;
}
