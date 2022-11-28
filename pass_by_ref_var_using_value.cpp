#include <iostream>
using namespace std;
void incmoney (int *moneyptr)
{
    cout<<moneyptr<<endl;
    (*moneyptr)=2*(*moneyptr);
    cout<<*moneyptr<<endl;
}

int main()
{
    int money =10;
    incmoney(&money);
    cout<<money<<endl;
    return 0;
}
