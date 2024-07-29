#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int sum,ave;
    cin>>a>>b>>c;
    sum=a+b+c;
    ave=sum/3;
    cout<<sum<<endl<<ave<<endl<<sum-ave;
    return 0;
}