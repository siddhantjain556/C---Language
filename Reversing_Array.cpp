#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cout<<"Enter The no.of Elements to be used: ";
    cin>>n;
    int arra[n];
    for (int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    for(int a=n-1;a>=0;a--)
    {
        cout<<arra[a]<<" , ";
    }
    return 0;
}
