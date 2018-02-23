#include <iostream>
using namespace std;
int main(void) {
	int i=0;
	char a[10];
	cin>>a;
	cout<<"Enter the k letters to beprinted";
	cin>>i;
	i=i-1;
	cout<<"\n";
	for(int j=0;j<=i;j++)
	{
		cout<<a[j];
	}
	return 0;
}
