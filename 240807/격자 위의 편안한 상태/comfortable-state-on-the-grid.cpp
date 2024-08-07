#include <iostream>
using namespace std;

bool is_range(int N, int x, int y){
    if(x>=N || y>=N || x<0 || y<0){
        return false;
    }else{
        return true;
    }
}


int main() {
    int N, M;
    cin >> N >> M;
    int arr2[102][102] = {0}; //0은 색칠이 안된상태
    int r[102];
    int c[102];
    int nx[4] = {1, 0, -1, 0};
    int ny[4] = {0, 1, 0, -1};
    int result;
    for(int i=0; i<M; i++){
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
    }
    for(int i=0; i<M; i++){
        result = 0;
        arr2[r[i]][c[i]] = 1;
        for(int j=0; j<4; j++){
            int nx_cell = r[i] + nx[j];
            int ny_cell = c[i] + ny[j];
            if(is_range(N, nx_cell, ny_cell)&&arr2[nx_cell][ny_cell]==1){
                result++;
            }
        }
        if(result==3)cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}