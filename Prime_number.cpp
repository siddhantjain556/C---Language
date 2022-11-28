#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l;
    cout<<"Enter the number you want to check whether it is prime or not: ";
    cin>>j;
    for(i=2;i<j;i++)
    {
        if (j%i==0)
        {
            break;
        }
    }
    if(i==j)
    {
        cout<<j<<" is a prime number.";
    }
    else
    {
        cout<<j<<" is not a prime number.";
    }
    return 0;

}
