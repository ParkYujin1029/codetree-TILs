#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    for(int i = 0;i <4; i++){
        for(int j = 0; j <4; j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<4;i++){
        cout<<arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3]<<endl;
    }
    return 0;
}