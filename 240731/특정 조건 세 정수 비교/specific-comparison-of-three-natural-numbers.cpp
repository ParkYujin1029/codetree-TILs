#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min=100;
    if(min>a){
        min = a;
    }if(min>b){
        min = b;
    }if(min>c){
        min = c;
    }
    cout << (min==a) << " ";
    cout << (a==b&&b==c);
    return 0;
}