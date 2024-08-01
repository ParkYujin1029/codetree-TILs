#include <iostream>
using namespace std;

int main() {
    double grade[8];
    double aver = 0;
    for(int i=0; i<8; i++){
        cin >> grade[i];
        aver += grade[i];
    }aver /= 8;
    cout << fixed;
    cout.precision(1);
    cout << aver;

    return 0;
}