#include<iostream>
using namespace std;
int main()
{
int a[9];
cout<<"Enter the numberS:";
for(int i=0;i<=9;i++)
{
    cin>>a[i];
}
for(int j=0;j<=9;j++)
{
cout<<"\n"<<a[j];
if(a[j]>>(a[j+1]))
{
    cout<<"\n"<<a[j];
}
}
for(int j=0;j<=9;j--)
{
    if(a[j+1]<<(a[j]))
{
    cout<<"\n"<<a[j+1];
}
    
}


return 0;
}
