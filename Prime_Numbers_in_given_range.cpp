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
void range(int a,int b)
{
    for (int i =a;i<=b;i++)
    {
        if(hello(i))
        {
            cout<<i<<" , ";
        }
    }
    cout<<endl;
}
int main()
{
    int a,b;
    cin>> a;
    cin>>b;
    range(a,b);
    return 0;
}
