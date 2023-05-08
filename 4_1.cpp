#include <iostream>
using namespace std;

int ciong(int a, int n){
    if (n == 0) return a; //warunek konca rekurencji
    int buff =  ciong(a, n-1); //rekurencja i zmienna pomocnicza ktora trzyma wynik zeby sie nie powtarzalo
    cout << buff << endl; //wypisuje wynik
    if (n % 2 == 0) return buff + 2; //warunek parzystosci
    else return buff * 2; //warunek nieparzystosci

}

int main(){
    int n;
    cout << "Podaj n wyrazow ciagu: ";
    cin >> n;
    int a_0=2; //pierwszy wyraz ciagu
    ciong(a_0, n);
    return 0;
}