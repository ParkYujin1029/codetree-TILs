#include <iostream>
using namespace std;

int main() {
    int n, k = 1;
    cin >> n;
    int arr[n][n];
    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(i%2==1){
                arr[j][i] = k;
            }else{
                arr[n-1-j][i] = k;
            }
            k++;
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    return 0;
}