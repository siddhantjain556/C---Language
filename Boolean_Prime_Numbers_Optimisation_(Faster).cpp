#include <iostream>
using namespace std;

bool hello(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<(hello(n)?"Prime":"Non Prime")<<endl;
    return 0;

}
