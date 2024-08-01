#include <iostream>

using namespace std;

// 구슬의 방향을 나타내는 Enum
enum Direction { UP, DOWN, RIGHT, LEFT };

// 방향에 따른 이동 좌표
const int dr[] = {-1, 1, 0, 0}; // UP, DOWN, RIGHT, LEFT
const int dc[] = {0, 0, 1, -1}; // UP, DOWN, RIGHT, LEFT

// 방향을 반대로 바꾸기 위한 함수
Direction reverseDirection(Direction d) {
    switch(d) {
        case UP: return DOWN;
        case DOWN: return UP;
        case RIGHT: return LEFT;
        case LEFT: return RIGHT;
    }
    return d; // 기본 반환 (이론적으로는 도달하지 않음)
}

int main() {
    int n, t;
    cin >> n >> t;

    int r, c;
    char d;
    cin >> r >> c >> d;

    // 초기 방향을 Enum으로 변환
    Direction direction;
    switch(d) {
        case 'U': direction = UP; break;
        case 'D': direction = DOWN; break;
        case 'R': direction = RIGHT; break;
        case 'L': direction = LEFT; break;
    }

    // t초 동안 구슬의 위치와 방향을 계산
    for (int i = 0; i < t; ++i) {
        int new_r = r + dr[direction];
        int new_c = c + dc[direction];

        // 벽에 부딪혔는지 확인
        if (new_r < 1 || new_r > n || new_c < 1 || new_c > n) {
            // 방향을 반대로 바꿈
            direction = reverseDirection(direction);
            // 방향을 바꾼 후 이동
            new_r = r + dr[direction];
            new_c = c + dc[direction];
        }

        // 위치를 업데이트
        r = new_r;
        c = new_c;
    }

    // 결과 출력
    cout << r << " " << c-1 << endl;

    return 0;
}