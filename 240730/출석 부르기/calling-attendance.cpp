#include <iostream>
using namespace std;

int main() {
    int attend;
    cin >> attend;
    if(attend == 1){
        cout << "John";
    }else if(attend == 2){
        cout << "Tom";
    }else if(attend == 3){
        cout << "Paul";
    }else{
        cout << "Vacancy";
    }
    return 0;
}