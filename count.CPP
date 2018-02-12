#include<iostream>
using namespace std;
int main()
{
int i=0,a;
cout<<"Enter the number:";
cin>>a;
if(a>0)
{
    i=i+1;
    {
        if(a>10)
        {
            i=i+1;
            if(a>100)
            {
                i=i+1;
                if(a>1000)
                {
                    i=i+1;
                }
            }
        }
    }
}
cout<<"\n"<<i;
return 0;
}
