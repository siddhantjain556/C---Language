#include <iostream>
using namespace std;
void incmoney(int &mymoney)
{
    mymoney=2*mymoney;
    cout<<mymoney<<endl;
}
int main()
{
    int money=10;
    incmoney(money);
    cout<<money<<endl;
    return 0;
}

