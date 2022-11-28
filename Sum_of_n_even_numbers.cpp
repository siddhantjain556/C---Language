#include <iostream>
using namespace std;
int main ()
{
    int i,j,k;
    int l=0;
    cout<<"Enter the No.of units of numbers that should be added: ";
    cin>>j;
    for(i=1;i<=j;i++)
    {
        cout<<"Enter The "<<i<<" number: ";
        cin>>k;
        if (k%2==0)
        {
            l+=k;
        }
    }
    cout<<"The sum of even Numbers is : "<<l;
    return 0;
}
