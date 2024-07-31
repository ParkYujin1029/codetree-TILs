#include <iostream>
using namespace std;

int main() {
    int Amath, Aeng, Bmath, Beng;
    cin >> Amath >> Aeng >> Bmath >> Beng;
    if(Amath==Bmath){
        if(Aeng>Beng){
            cout << 'A';
        }else{
            cout << 'B';
        }
    }else{
        if(Amath>Bmath){
            cout << 'A';
        }else{
            cout << 'B';
        }
    }
    return 0;
}