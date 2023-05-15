// ZADANIE 2 (zad_2.cpp) - 4 pkt:
// Napisz program, który:
// - Wczytuje podaną przez użytkownika liczbę typu całkowitego bez znaku.
// - Uruchamia funkcję rekurencyjną (nie można używać pętli w funkcji), która wyznacza 
// iloczyn cyfr podanej jako argument liczby całkowitej bez znaku (2.5 pkt) i zwraca wynik 
// do programu głównego (również typu liczba całkowita bez znaku). Funkcja również wyświetla 
// cyfry w odwrotnej kolejności (1.5 pkt).
// - Program wyświetla wynik funkcji (iloczyn cyfr)

#include <iostream>
using namespace std;

unsigned int rekurencyjnie(unsigned int x){
    if(x==0) return 1; // jesli x=0 to zwracamy 1, warunek koncowy rekurencji, 1 zeby nam nie wyzerowalo wyniku
    unsigned int mnoznik=x%10; // mnoznik to ostatnia cyfra
    x/=10; // usuwamy ostatnia cyfre
    cout<<mnoznik;
    return rekurencyjnie(x)*mnoznik; // wywolujemy funkcje rekurencyjnie i zwracajac mnozymy przez mnoznik
}

int main(){
    unsigned int x;
    int y;
    cin>>y;
    if(y<0) return 0; // jesli ujemna to konczymy, potrzebne jest to bo jak wpiszemy z minusem to wyszlaby nam jakas losowa duza liczba
    else x=y;
    unsigned int buff = rekurencyjnie(x); // zapisujemy wynik funkcji do zmiennej buff zeby ladnie wywolac funkcje i wyszlo w nowej linii
    cout<<endl<<buff;
}