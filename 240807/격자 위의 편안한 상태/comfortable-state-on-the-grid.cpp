#include <iostream>
using namespace std;

int is_range(int N, int x, int y){
    if(x>=N || y>=N || x<0 || y<0){
        return false;
    }else{
        return true;
    }
}


int main() {
    int N, M;
    cin >> N >> M;
    int arr2[100][100] = {0}; //0은 색칠이 안된상태
    int r[100];
    int c[100];
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
            if(is_range(N, r[i]+nx[j], c[i]+ny[j])&&arr2[r[i]+nx[j]][c[i]+ny[j]]==1)result++;
        }
        if(result==3)cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}