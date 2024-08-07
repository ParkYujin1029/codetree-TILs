#include <iostream>
using namespace std;

int is_range(int n, int x, int y){
    if(x>=n || y>=n || x<0 || y<0){
        return 0;
    }else{
        return 1;
    }
}

int main() {

    int n; //행렬의 크기를 나타내는 정수
    int t; //주어진 시간을 나타내는 정수
    cin >> n >> t;
    int r, c; //초기 구슬의 위치를 나타내는 정수. r행 c열에 위치함
    char d; //초기 구슬의 방향을 나타내는 문자
    cin >> r >> c >> d;
    r --; //인덱스 형태로 변환
    c --; //인덱스 형태로 변환

    int dir_num;
    if(d == 'U')dir_num = 2;
    else if(d == 'D')dir_num = 1;
    else if(d == 'R')dir_num = 0;
    else dir_num = 3;
    int nx[4] = {0, 1, -1, 0};
    int ny[4] = {1, 0, 0, -1};

    for(int i=0; i<t; i++){
        if(is_range(n, r, c)&&is_range(n,r+nx[dir_num],c+ny[dir_num])){ //만약 현재 구슬이 올바른 위치에 있다면 현 방향으로 진행
            r += nx[dir_num];
            c += ny[dir_num];
        }else{ //아니면 방향 바꾸기
            dir_num = 3 - dir_num;
        }
    }

    cout << r+1 << " " << c+1;

    return 0;
}