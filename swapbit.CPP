#include <iostream>
#include<string.h>
using namespace std;
int main(void) {
	int i,j;
	float k;
	cin>>j>>i;
	i=i^j;
	k=i^j;
	i=i^j;
	cout<<i;
	cout<<"\n";
	cout<<j;
	return 0;
}
