#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int max = a>=b?a:b;
    cout << max;
    return 0;
}