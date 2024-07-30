#include <iostream>
using namespace std;

int main() {
    int arr[10][10] = {0};
    int n, m;
    cin >> n >> m;
    int x, y;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        arr[x-1][y-1] = x*y;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    return 0;
}