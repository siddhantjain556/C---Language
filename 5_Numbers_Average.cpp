#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum = a+b+c+d+e;
    int average = sum / 5;
    cout<<fixed<<setprecision(4)<<(float)average;
    return 0;
}

