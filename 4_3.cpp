#include <iostream>
using namespace std;


void szesnastkowy(int a){
    if (a == 0) return;
    szesnastkowy(a/16);
    if (a%16 < 10) cout << a%16;
    else cout << char(a%16 + 55);
}

int main(){
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "\nLiczba w systemie szesnastkowym: ";
    szesnastkowy(a);
    return 0;
}