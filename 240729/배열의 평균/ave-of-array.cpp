#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    double aver = 0;
    cout<<fixed;
    cout.precision(1);
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            aver += arr[i][j];
        }
    }
    double rkfh[2]={0,0};
    double tpfh[4]={0};
    for(int i=0;i<4;i++){
        rkfh[0] += arr[0][i];
        rkfh[1] += arr[1][i];
    }
    for(int i=0;i<2;i++){
        rkfh[i]/=4;
        cout<<rkfh[i]<<" ";
    }cout<<endl;
    for(int i=0;i<4;i++){
        tpfh[i] = arr[0][i] + arr[1][i];
        tpfh[i]/=2;
        cout<<tpfh[i]<<" ";
    }cout<<endl;
    aver/=8;
    cout<<aver;
    return 0;
}