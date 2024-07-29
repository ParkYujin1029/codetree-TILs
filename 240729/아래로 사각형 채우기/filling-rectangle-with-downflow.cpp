#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rect[n][n];
    int k = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            rect[j][i] = k;
            k++;
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout<<rect[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}