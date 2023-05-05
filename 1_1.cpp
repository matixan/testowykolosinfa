#include <iostream>
using namespace std;

int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b < 0.0 || d < 0.0){
        cout << "nie dzielimy przez 0" << endl;
        return 0;
    }
    cout << "wynik:" << (a/b+c/d) << endl;
}