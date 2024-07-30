#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int placed[n][n] = {0,};
    int x, y;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        placed[x-1][y-1] = 1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << placed[i][j] << " ";
        }cout << endl;
    }
    return 0;
}