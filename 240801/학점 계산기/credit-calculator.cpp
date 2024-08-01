#include <iostream>
using namespace std;

int main() {
    int n;
    double aver =0;
    double grade[6];
    cin >> n;
    for(int i=0; i<n ; i++){
        cin >> grade[i];
    }
    cout << fixed;
    cout.precision(1);
    for(int i=0; i<n; i++){
        aver += grade[i];
    }aver /= n;
    cout << aver << endl;
    if(aver>=4.0)cout<<"Perfect";
    else if(aver>=3.0)cout<<"Good";
    else cout<<"Poor";
    return 0;
}