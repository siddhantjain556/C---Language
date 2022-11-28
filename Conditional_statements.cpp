#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    char op;
    cout<<"Enter The First Number: ";
    cin>>a;
    cout<<"Enter The Second Number: ";
    cin>>b;
    cout<<"Enter The Operator: ";
    cin>>op;
    switch (op)
    {
        case '+':
            cout<<"The Addition of 2 numbers is : "<<(a+b);
            break;
        case '-':
            cout<<"The Subtraction of 2 numbers is : "<<(a-b);
            break;
        case '*':
            cout<<"The Multiplication of 2 numbers is : "<<(a*b);
            break;
        case '/':
            cout<<"The Division Of 2 numbers is : "<<(a/b);
            break;
        default:
            cout<<"Enter a valid operator.";

    }
    cout<<"Thank You for using the Calculator.";
    return 0;

}
