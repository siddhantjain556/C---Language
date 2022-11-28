#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l;
    cout<<"Enter the No.of numbers that you want to check if it is a prime or not: ";
    cin>>j;
    for (i=1;i<=j;i++)
    {
        cout<<"Enter the "<<i<<" number: ";
        cin>>k;
        for(l=2;l<k;l++)
        {
            if (k%l==0)
            {
                break;
            }
        }
        if(l==k)
        {
            cout<<k<<" is a prime number"<<endl;
        }
        else
        {
            cout<<k<<" is not a prime number."<<endl;
        }

    }
    return 0;
}
