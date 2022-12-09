#include <iostream>
using namespace std;
bool hello(int n)
{
    for(int i=2;i<n-1;i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    for(int i=0;i<1000;i++)
    {
        int n;
        cout<<"Enter the number that you want ot check if it is a prime number or not: ";
        cin>>n;
        cout<<(hello(n)?"PRIME":"NOT PRIME")<<endl;
    }


 return 0;
}

