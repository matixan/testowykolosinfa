// ZADANIE 2 (zad_2.cpp) - 3.5 pkt:
// Napisz program, który:
// - wczytuje tekst podany przez użytkownika (zmienna typu string) bez wstępnego komunikatu 
// - wczytuje wzorzec (również tekst), który posłuży jako argument wejściowy dla drugiej funkcji - 0.25 pkt
// - Uruchamia funkcję, która wczytuje zmienną typu string i oblicza liczbę wystąpień liter (bez spacji i znaków specjalnych) - 
// kody ASCII: duże litery od 65 do 90, małe litery od 97 do 122  - 1 pkt
// - Uruchamia kolejną funkcję (rekurencyjną), której zadaniem jest poszukiwanie zadanego wzorca w zdaniu, podanego jako drugi argument funkcji. 
// Funkcja zwraca liczbę wystąpień wzorca. 
// Wzorce nie mogą się nakładać tzn. dla szukanego wzorca "aa", w zdaniu "aaa" wynikiem jest 1. - 2 pkt
// - Wynik działania obu funkcji są wyświetlany w programie (bez komunikatu). - 0.25 pkt

#include <iostream>
#include <string>
using namespace std;



int main(){
    string tekst, wzorzec;
    string.get(cin);
    
    
    cin>>wzorzec;
    liczbawystapienliter(tekst, wzorzec);
}