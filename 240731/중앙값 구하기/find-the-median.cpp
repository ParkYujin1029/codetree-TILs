#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min = 200;
    int max = -200;
    if(min>a)min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    if(max<a)max=a;
    if(max<b)max=b;
    if(max<c)max=c;
    if(a!=max&&a!=min){
        cout << a;
    }else if(b!=max&&b!=min){
        cout << b;
    }else{
        cout << c;
    }
    return 0;
}