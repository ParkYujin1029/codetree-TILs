#include <iostream>
using namespace std;

int main() {
    int N; //몇번의 움직임을 입력받을 것인가?
    cin >> N;
    char d[100]; //이동하려는 방향
    int l[100]; //이동하려는 거리
    int t = 0;
    int nx[4] = {1, -1, 0, 0};
    int ny[4] = {0, 0, -1, 1};
    int dir_num;
    int x = 0; //현재 위치를 x,y로 나타냄
    int y = 0;
    for(int i=0; i<N; i++){
        cin >> d[i] >> l[i];
    }
    for(int i=0 ; i<N; i++){
        if(d[i]=='E')dir_num = 0;
        else if(d[i]=='W')dir_num = 1;
        else if(d[i]=='S')dir_num = 2;
        else dir_num = 3;
        for(int j=0; j<l[i]; j++){
            x += nx[dir_num];
            y += ny[dir_num];
            t++;
            if(x==0&&y==0){
                cout << t;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}