#include <iostream>
using namespace std;

int main() {
    int n, l = 1;
    int k = 1;
    int arr[10][10];
    cin >> n;
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            if(l%2 == 0){
                arr[n-j-1][i] = k;
            }else{
                arr[j][i] = k;
            }k++;
        }l++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    return 0;
}