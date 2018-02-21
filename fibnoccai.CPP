#include <iostream>
using namespace std;

int main(void) {
	int n,i, fi1=1,fi2=1,fi3;
	cin>>n;
	cout<<" \n"<<fi1<<"\t"<<fi2;
	for(i=1;i<n-1;i++)
	{
		
	
		fi3=fi1+fi2;
		cout<<"\t"<<fi3;
		fi1=fi2;
		fi2=fi3;
	}
	return 0;
}
