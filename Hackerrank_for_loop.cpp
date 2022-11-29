#include <iostream>
using namespace std;
int main ()
{
    int a ,b;
    cin>>a>>b;
    string arra[9]={"one","two","three","four","five","six","seven","eight","nine"};
    if  (a<=9)
    {
        for(int i=a-1;i<9;i++)
        {
            cout<<arra[i]<<endl;
        }
    }
    if (b>9)
    {
        for(int c=10;c<=b;c++)
        {
            if (c%2==0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}
