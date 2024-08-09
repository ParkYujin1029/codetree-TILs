#include <iostream>
#include <algorithm>

#define MAX_NUM 20

using namespace std;

// 전역 변수 선언:
int n, m;
int A[MAX_NUM];

int ans;

void FindMaxXor(int curr_idx, int cnt, int curr_val) {
    if(cnt == m) {
        ans = max(ans, curr_val);
        return;
    }

    if(curr_idx == n) 
        return;

    // curr_idx index 에 있는 숫자를 선택하지 않은 경우
    FindMaxXor(curr_idx + 1, cnt, curr_val);
    
    // curr_idx index 에 있는 숫자를 선택한 경우
    FindMaxXor(curr_idx + 1, cnt + 1, curr_val ^ A[curr_idx]);
}

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < n; i++) 
        cin >> A[i];

    FindMaxXor(0, 0, 0);
    
    // 출력:
    cout << ans;

    return 0;
}