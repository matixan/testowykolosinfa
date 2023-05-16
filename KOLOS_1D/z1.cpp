// ZADANIE 1 (zad_1.cpp) - 2.5 pkt:
// Napisz program, który:
// - Tworzy tablicę liczb całkowitych o liczbie elementów 10 i prosi (BEZ dodatkowego komunikatu) o jej wypełnienie - 0.5 pkt
// - Uruchamia funkcję, która przyjmuje jako argument tę tablicę i jej rozmiar. Zadaniem funkcji jest wyznaczenie histogramu 
// cyfr występujących w tablicy (znaki "-" w liczbach ujemnych są ignorowane ). - 1.5 pkt
// - Wynik działania funkcji, tj. tablica zwartościami histogramu, jest wyświetlany w programie (bez komunikatu). Poszczególne wartości oddzielone są znakami spacji - 0.5

#include <iostream>
using namespace std;


int histogram[10] = {0}; // inicjacja globalna aby kazda funkcja mogla z niej korzystac, mozna tez przekazywac jako argument, jak kto woli


void histogramowanie(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++)
    {
        histogram[tab[i]]++; // zwiekszamy wartosc histogramu dla danej cyfry, np. histogram[3]++ zwiekszy wartosc histogramu dla cyfry 3
    } //przyjmujemy ze wartosci nie moga byc wieksze niz 9, bo histogram ma 10 elementow, kiedys to robilismy na jakiejs lekcji
}


int main(){
    int tab[10];
    
    for (int i = 0; i < 10; i++)
    {
        int buff;
        cin >> buff; //(BEZ dodatkowego komunikatu) musialby to wytlumaczyc na zywo ale to nie moje laby to sie moge tylko domyslac
        buff = abs(buff); // ignorowanie znaku "-"
        if(buff < 10) {// przyjmujemy ze ma byc mniejsze niz 10, bo histogram ma 10 elementow
            tab[i] = buff;
        }
        else {
            cout<<"Liczba musi byc mniejsza niz 10!"<<endl;
            i--;
        }
    }
    //pije sobie piwo
    histogramowanie(tab, 10);
    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<histogram[i]<<" ";
    }
    return 0;
}