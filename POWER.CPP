#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"\nEnter the number's";
cin>>a;
if(a%2==0)
{
if(((a/2)%2==0))
{
cout<<"\nYes";	
}
else
cout<<"\nNO";
}
else
cout<<"\nNo";
}


