#include <iostream>
using namespace std;

int main() {
int number=0;
cout<<"Enter the number";
cin>>number;
if(number%2==0)
{
	cout<<"\n"<<number;
}
else
{
	number=number-1;
	cout<<"\n"<<number;
}
	return 0;
}
