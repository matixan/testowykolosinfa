#include <iostream>
using namespace std;

int potegowanie(int a, int b){
    int wynik = 1;
    for(int i = 0; i < b; i++){
        wynik *= a;
    }
    return wynik;
}

int main(){
    int a, b;
    cout<<"Podaj podstawę: ";
    cin>>a;
    cout<<"Podaj wykładnik: ";
    cin>>b;
    if(b < 0){
        cout<<"\nwykładnik nie może być ujemny!";
        return 0;
    }
    cout<<"\nwynik: "<<potegowanie(a, b);
}