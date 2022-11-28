#include<iostream>
using namespace std;
int area(int a , int b)
{
    int rectangle=a*b;
    return rectangle;
}
int area(int c)
{

    int square=c*c;
    return square;
}
int main()
{
    cout<<area(5,3)<<endl;
    cout<<area(5)<<endl;
    return 0;
}
