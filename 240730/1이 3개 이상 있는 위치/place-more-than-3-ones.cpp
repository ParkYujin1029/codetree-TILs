#include <iostream>
using namespace std;

bool in_range(int x, int y, int n){
    if (x >= n || y >= n || x < 0 || y < 0){
        return false;
    }else{
        return true;
    }
}

int main() {
    int n;
    int result = 0;
    int cnt = 0;
    int dx = 0;
    int dy = 0;
    int nxs[4] = {-1, 0, 1, 0};
    int nys[4] = {0, 1, 0, -1};
    cin >> n;
    int dim[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> dim[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cnt = 0;
            for(int k=0; k<4; k++){
                dx = i + nxs[k];
                dy = j + nys[k];
                if(in_range(dx, dy, n)&&dim[dx][dy]==1){
                    cnt++;
                }
            }if(cnt >= 3){
                result++;
            }
        }
    }
    cout << result;
    return 0;
}