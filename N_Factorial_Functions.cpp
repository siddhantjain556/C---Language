#include <iostream>
using namespace std;
int Factorial(int n)
{
    int i=1;
    int sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int main()
{
    cout<<Factorial(5);
    return 0;
}
