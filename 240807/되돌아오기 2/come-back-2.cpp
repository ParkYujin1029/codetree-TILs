#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int t=0;
    int dir_num = 1;
    int x = 0;
    int y = 0;
    int nx[4] = {1, 0, -1, 0};
    int ny[4] = {0, 1, 0, -1};
    for(int i=0; i<str.length(); i++){
        if(str[i]=='L'){
            dir_num = (dir_num + 1)%4;
        }else if(str[i] == 'R'){
            dir_num = (dir_num + 3)%4;
        }else{
            x += nx[dir_num];
            y += ny[dir_num];
        }
        t++;
        if(x==0&&y==0){
            cout << t;
            return 0;
        }
    }
    cout << -1;
    return 0;
}