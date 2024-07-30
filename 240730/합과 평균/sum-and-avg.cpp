#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a>> b;
    int sum = a + b;
    double aver = double(a+b)/2;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << aver;
    return 0;
}