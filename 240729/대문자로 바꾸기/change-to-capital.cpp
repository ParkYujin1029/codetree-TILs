#include <iostream>
using namespace std;

int main() {
    char alpha[5][3];
    int ASCII = 'A' - 'a';
    for(int i = 0; i<5;i++){
        for(int j=0;j<3;j++){
            cin>>alpha[i][j];
            alpha[i][j] += ASCII;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<alpha[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}