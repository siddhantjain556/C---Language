#include <iostream>
using namespace std;
int main()
{

    int n=5;
    int arra[n]={1,2,3,4,5};
    for(int i=0;i<1;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
                cout<<arra[k]<<",";
                cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

/*first j=0 then k=o then j=1 then k=0,1 then j=2 then k=0,1,2 */
