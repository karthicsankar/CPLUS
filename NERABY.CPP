#include <iostream>
using namespace std;

int main() {

    int number, i;

    cout<<"Enter a  integer: ";
    cin>>number;

    for(i=number; i<=99999; ++i)
    {
        					// condition for nonprime number
        if(i%10==0)
        {
           if((i-number)>5)
           {
            i=i-10;
           }
           
           cout<<"nearest number is"<<i;
           
          break;
           
        }
    }

    return 0;
}
