#include <iostream>
using namespace std;
void arra(int myarray[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<myarray[i]<<endl;
    }
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sizeof(arr)<<endl;
    arra(arr,n);
    return 0;

}
