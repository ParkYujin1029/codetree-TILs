#include <iostream>
using namespace std;

int main() {
    char dban;
    int temp;
    int a = 0;
    for(int i=0; i<3; i++){
        cin >> dban >> temp;
        if(dban == 'Y'){
            if(temp >= 37){
                a++;
            }
        }
    }if(a>=2)cout << 'E';
    else cout << 'N';
    return 0;
}