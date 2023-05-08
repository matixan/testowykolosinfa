#include <iostream>
using namespace std;

int main(){//ciag arytmetyczny
    int X; //pierwszy wyraz ciagu
    int r; //roznica ciagu
    int N; //ilosc wyrazow ciagu
    cout << "Podaj pierwszy wyraz ciagu: ";
    cin >> X;
    cout << "Podaj roznice ciagu: ";
    cin >> r;
    cout << "Podaj ilosc wyrazow ciagu: ";
    cin >> N;
    for(int i = 0; i < N; i++){
        cout << X + i * r << endl; //wypisuje wyrazy ciagu
    }
    return 0;
}