#include <iostream>
using namespace std;

bool is_range(int N, int x, int y){ //현재의 인덱스 x,y가 범위안에 있는지 확인하는 함수
    return x >= 0 && x < N && y >= 0 && y < N; //x,y가 0이상, N이하면 true 아니면 false
}


int main() {
    int N, M; //N*N행렬에 M개의 점을 색칠할거임
    cin >> N >> M;
    int arr2[102][102] = {0}; //0은 색칠이 안된상태
    int r[10000];
    int c[10000];
    int nx[4] = {1, 0, -1, 0};//우, 상, 좌, 하
    int ny[4] = {0, 1, 0, -1};
    for(int i=0; i<M; i++){
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
    }
    for(int i=0; i<M; i++){
        int result = 0;
        arr2[r[i]][c[i]] = 1; //색칠을 하면서 그 칸이 편안한 상태인지를 확인함.!!색칠을 다한후 확인하는것이 아님!!
        for(int j=0; j<4; j++){//우, 상, 좌, 하 인덱스가 범위 내인지 확인하고, 범위 내면 그 칸이 색칠됐는지 확인함
            int nx_cell = r[i] + nx[j];
            int ny_cell = c[i] + ny[j];
            if(is_range(N, nx_cell, ny_cell)&&arr2[nx_cell][ny_cell]==1){
                result++;//색칠됐으면 result값을 더해주고, 아니면 안더해줌
            }
        }
        if(result==3){//최종적으로 result의 값이 3, 즉 편안한 상태면 1을 출력함
            cout << 1 << endl;
        }else{//result의 값이 3이 아니면, 즉 0,1,2,4이면 0을 출력함
            cout << 0 << endl;
        } 
    }
    return 0;
}