#include<iostream>
using namespace std;
int main()
{
int q,a[q],b,k=0,average;
cout<<"Enter the number to be calculated";
cin>>q;
cout<<"\nEnter the number's";
for(int i=0;i<=(q-1);i++)
{
cin>>a[i];
}
for(int j=0;j<=(q-1);j++)
{
k=a[j]+k;
}
average=(k/q);
cout<<"\nthe average is "<<average;
}

