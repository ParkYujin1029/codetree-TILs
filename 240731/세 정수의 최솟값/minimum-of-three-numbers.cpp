#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min = 200;
    if(min>a)min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    cout << min;
    return 0;
}