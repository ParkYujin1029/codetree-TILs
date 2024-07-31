#include <iostream>
using namespace std;

int main() {
    double eyeR, eyeL;
    cin >> eyeR >> eyeL;
    if (eyeR>=1.0 && eyeL>=1.0){
        cout<<"High";
    }else if(eyeR>=0.5 && eyeL>=0.5){
        cout<<"Middle";
    }else{
        cout<<"Low";
    }
    return 0;
}