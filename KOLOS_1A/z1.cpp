// ZADANIE 1 (zad_1.cpp) - 2 pkt:
// Napisz program, który:
// - wczytuje (bez wstępnego komunikatu) tablicę 10 liczb całkowitych podanych przez użytkownika - 0.25 pkt
// - uruchamia funkcję, która wczytuje tablicę i zwraca wynik typu int. Funkcja najpierw znajduje minimalną i maksymalną wartość w tablicy (1 pkt).
// Następnie oblicza iloczyn bitowy (and) znalezionego minimum i maksimum i zwraca go jako wynik (0.5 pkt).
// - Wynik działania funkcji jest wyświetlany w programie (bez komunikatu). - 0.25 pkt

#include <iostream>
using namespace std;

int znajdz(int tab[10]){
    int min = tab[0], max = tab[0];
    for (int i=0; i<10; i++){ //petla szukajaca min i max
        if (tab[i]<min) min=tab[i]; //jesli element tablicy jest mniejszy od min, to min przyjmuje wartosc tego elementu
        if (tab[i]>max) max=tab[i];
    }
    //cout<<"maks: "<<max<<" min: "<<min<<endl;
    return min&max; //zwrocenie iloczynu bitowego
}

int main(){
    int tab[10] = {}; //inicjalizacja zerowej tablicy
    for(int i=0; i<10; i++){
        cin>>tab[i]; //wczytywanie tablicy w petli, mozna wpisywac po spacji albo enterem 10 razy
    }
    cout<<endl<<znajdz(tab); //wyswietlenie wyniku funkcji znajdz
}