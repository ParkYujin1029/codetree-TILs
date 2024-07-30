#include <iostream>
#include <string>
using namespace std;

int main() {
    string order;
    getline(cin, order);
    int x = 0;
    int y = 0;
    int dir_num = 0;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    for (int i = 0; i < order.length(); i++) {
        if(order[i]=='L'){
            dir_num = (dir_num + 3) % 4;
        }else if(order[i]=='R'){
            dir_num = (dir_num + 1) % 4;
        }else{
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }
    cout << x << " " << y;
    return 0;
}