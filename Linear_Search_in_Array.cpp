#include <iostream>
using namespace std;

int linear(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the No.of Elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cout<<"Enter the "<<i<<" elements: ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to be found: ";
    cin>>key;
    int result=linear(arr,n,key);
    if (result==-1)
    {
        cout<<"Element Not Found";
    }
    else
    {
        cout<<"Element no. "<<key<<" Found";
    }
}
