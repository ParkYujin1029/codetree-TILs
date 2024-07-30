#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    double aver = double(a + b + c)/3;
    cout << fixed;
    cout.precision(0);
    cout << sum << endl << aver;
    return 0;
}