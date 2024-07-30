#include <iostream>
using namespace std;

int main() {
    int arr[9][9] = {0,};
    int n, m;
    cin >> n >> m;
    int x, y;
    int num = 1;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        arr[x-1][y-1] = num;
        num++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    return 0;
}