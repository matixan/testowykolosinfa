#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(!b) cout << "nie dziel przez 0";
    else
    if(a%b == 0) cout << "tak";
    else cout << "nie";
    return 0;
}