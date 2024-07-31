#include <iostream>
using namespace std;

int main() {
    int g, a;
    cin >> g >> a;
    if(g==0){
        if(a<19){
            cout << "BOY";
        }else{
            cout << "MAN";
        }
    }else{
        if(a<19){
            cout << "GIRL";
        }else{
            cout << "WOMAN";
        }
    }
    return 0;
}