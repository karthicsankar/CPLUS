#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter the value"
	cin>>n;
	int p=1;
	
	if(n%2==0)
	{
	    cout<<(n*2);
	}
	else
	{
	    while(p<n)
	{
		p<<=1;
	}
	cout<<p;
	}
	
	return 0;
}
