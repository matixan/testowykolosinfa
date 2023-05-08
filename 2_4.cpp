#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, max;
    cout<<"Podaj x:";
    cin >> x;
    cout<<"Podaj max:";
    cin >> max;
    if(x > max){
        cout << "x nie moze byc wieksze od max" << endl;
        return 0;
    }
    double wartosc = x;

    for(int i = 2; wartosc < max; i++){
        cout << wartosc << endl;
        wartosc = pow(x, i);
    }

}