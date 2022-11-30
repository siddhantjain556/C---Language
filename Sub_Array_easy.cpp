#include <iostream>
using namespace std;
int main ()
{
    int n=5;
    int arra[n]={1,2,3,4,5};

    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            cout<<i<<j<<endl;
        }
    }
    return 0;

}

