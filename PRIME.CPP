#include<iostream>
using namespace std;
int main() {

    int number, i, flag = 0;

    cout<<"Enter a positive integer: ";
    cin>>number;

    for(i=2; i<=(number); ++i)
    {
        					// condition for nonprime number
        if(number%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        cout<<" is a prime number."<<number;
    else
        cout<<" is not a prime number."<<number;
    
    return 0;
}
