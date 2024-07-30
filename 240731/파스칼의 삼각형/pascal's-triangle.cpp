#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pascal[n][n];
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            if(i==j||j==0){
                pascal[i][j] = 1;
            }else{
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
            cout << pascal[i][j] << " ";
        }cout << endl;
    
    }
    return 0;
}