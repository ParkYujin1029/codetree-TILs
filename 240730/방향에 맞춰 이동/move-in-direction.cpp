#include <iostream>
using namespace std;

int main() {
    int N, how, whe;
    int x = 0;
    int y = 0;
    cin >> N;
    char dir;

    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};
    for(int i = 0; i < N; i++){
        cin >> dir >> how;
        switch(dir){
            case 'W':
                whe = 0;
                break;
            case 'S':
                whe = 1;
                break;
            case 'N':
                whe = 2;
                break;
            case 'E':
                whe = 3;
                break;
        }
        x += (dx[whe]*how);
        y += (dy[whe]*how);
    }
    cout << x << " " << y;
    return 0;
}