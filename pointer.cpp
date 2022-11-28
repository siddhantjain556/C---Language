#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    cout<<y<<endl;
    cout<<&x<<endl;
    int*xptr=&x;
    cout<<*xptr<<endl;
    cout<<xptr<<endl;
    return 0;
}
