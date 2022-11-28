#include <iostream>
using namespace std;
int main ()
{
    int i = 1;
    int j;
    int k;
    int l=0;
    cout<<"Enter the no. of units of numbers to be added : "<<endl;
    cin>>j;
    while(i<=j)
    {
        cout<<"Enter the "<<i<<" number :";
        cin>>k;
        l=l+k;
        i++;
    }
    cout<<"The sum of "<<j<<" numbers are : "<<l<<endl;
    return 0;
}
