#include <iostream>
using namespace std;

void ciong_malejaco(int a, int n, int q){
    if (n == 0) return; //warunek konca rekurencji
    ciong_malejaco(a*q, n-1, q); //wywolanie rekurencyjne
    cout << a << endl; //wypisuje wynik
}

void ciong_rosnaco(int a, int n, int q){
    if (n == 0) return; //warunek konca rekurencji
    cout << a << endl; //wypisuje wynik
    ciong_rosnaco(a*q, n-1, q); //wywolanie rekurencyjne
}

/* rozne sposoby wypisywania ciagu
no bo zalezy czy bedziemy wypisywac wynik rekurencji przed czy po jej wywolaniu */

int main(){
    int a_0, n, q;
    cout << "Podaj pierwszy wyraz ciagu: ";
    cin >> a_0;
    cout << "Podaj ilosc wyrazow ciagu: ";
    cin >> n;
    cout << "Podaj q: ";
    cin >> q;
    cout<<"ciag malejaco: "<<endl;
    ciong_malejaco(a_0, n, q);
    cout<<"ciag rosnaco: "<<endl;
    ciong_rosnaco(a_0, n, q);
    return 0;
}