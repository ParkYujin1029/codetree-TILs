#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    cin >> score;
    string ispass = score==100?"pass":"failure";
    cout << ispass;
    return 0;
}