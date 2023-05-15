// ZADANIE 1 (zad_1.cpp) - 2 pkt:
// Napisz program, który:
// - Tworzy niezainicjalizowaną tablicę liczb całkowitych o liczbie elementów 10 - 0.25 pkt
// - Uruchamia funkcję, która przyjmuje jako argument tę tablicę i jej rozmiar. 
// Zadaniem funkcji jest wprowadzanie do tablicy rosnących wartości, tj. każdy kolejny (i-ty) 
// element musi być większy od wszystkich elementów o indeksie < i. W przypadku gdy 
// wprowadzany przez użytkownika (BEZ poprzedzającego komunikatu) element tablicy nie jest większy 
// niż poprzednie, program oczekuje aż do momentu gdy wprowadzona zostanie poprawna wartość. - 1.5 pkt
// - Wynik działania funkcji, tj. uzupełniona tablica jest wyświetlany w programie (bez komunikatu). 
// Wartości tablicy są oddzielone znakiem spacji - 0.25 pkt

#include <iostream>
using namespace std;

int wczytuj(int tab[10]){
    cin>>tab[0];
    int proby=0;
    for (int i=1; i<10; i++){
        proby++; // liczy ile razy cos bylo wpisane ale nie ma za duzo na ten temat w poleceniu idk
        int temp;
        cin>>temp;
        if(temp>tab[i-1]) tab[i]=temp; // jezeli jest wieksze to wpisuje
        else i--;
    }
    return proby;
}

int main(){
    int tab[10];
    int iloscprob=wczytuj(tab); // - Uruchamia funkcję, która przyjmuje jako argument tę tablicę i jej rozmiar. 
    // ciekawe po co jest ten rozmiar
    for(int i=0; i<10; i++){ // - Wynik działania funkcji, tj. uzupełniona tablica jest wyświetlany w programie
        cout<<tab[i]<<" ";
    }
}