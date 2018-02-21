#include <iostream>
using namespace std;

int main() {
int num,number=0,number2=0;
cout<<"Enter the number";
cin>>number>>number2;
num=number*number2;
if(num%2==0)
{
	cout<<"\n Even "<<num;
}
else
{

	cout<<"\n Odd "<<num;
}
	return 0;
}
