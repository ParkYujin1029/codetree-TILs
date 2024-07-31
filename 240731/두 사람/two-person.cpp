#include <iostream>
using namespace std;

int main() {
    int Aage, Bage;
    char a, b;
    cin >> Aage >> a >> Bage >> b;
    cout << ((Aage>=19&&a=='M')||(Bage>=19&&b=='M'));
    return 0;
}