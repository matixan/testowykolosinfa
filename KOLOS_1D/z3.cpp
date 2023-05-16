// ZADANIE 3 (zad_3.cpp) - 4 pkt:
// Napisz program, który:
// - Tworzy niezainicjalizowaną tablicę o liczbie elementów 5 - 0.25 pkt
// - Prosi użytkownika (bez podania komunikatu) o podanie wartości całkowitej N (wiekszej niż 0).
// - Uruchamia funkcję, która przyjmuje jako argument tę tablicę i jej rozmiar, oraz wartość całkowitą N. Zadaniem funkcji jest wprowadzanie elementów do tablicy tak aby odległość Hamminga między dwiema sąsiednimi liczbami była <= N. W przypadku gdy wprowadzany przez użytkownika (BEZ poprzedzającego komunikatu) liczba nie spełnia warunku maksymalnej odległości Hamminga, program oczekuje aż do momentu gdy wprowadzona zostanie poprawna wartość. (1.5 pkt)
// - Odległość Hamminga to liczba bitów na jakich różnią się dane liczby. Obliczanie odległości Hamminga napisz w osobnej funkcji (2 pkt), która będzie wykorzystywana w funkcji uzupełniającej tablicę. Na wejściu funkcji: dwie wartości całkowite podlegające porównaniu, na wyjściu wartość całkowita - odległość Hamminga.
// - Wynik działania funkcji, tj. uzupełniona tablica jest wyświetlany w programie (bez komunikatu). Wartości tablicy są oddzielone znakiem spacji - 0.25 pkt

#include <iostream>
using namespace std;

unsigned int hamming(int a, int b){ // funkcja zwraca ilosc bitow(odleglosc hamminga) na ktorych roznia sie dwie liczby a i b
    unsigned int wynik = 0;
    while(a > 0 || b > 0){ // dopoki a lub b jest wieksze od 0
        if(a % 2 != b % 2) wynik++; // jesli ostatni bit a i b jest rozny to zwiekszamy wynik
        a /= 2; // dzielimy przez 2 zeby przejsc na kolejny bit
        b /= 2;
    } //mozna to zrobic maska bitowa, ale na jedno wychodzi
    return wynik;
}

void wczytywanie(int tab[], int rozmiar, unsigned int N){
    int liczba;
    cin >> tab[0]; // wczytujemy pierwsza liczbe, dla niej nie ma ograniczen
    for(int i = 1; i < rozmiar; i++){
        cin >> liczba;
        if(hamming(tab[i - 1], liczba) <= N) tab[i] = liczba; // jesli odleglosc hamminga jest mniejsza lub rowna N to wpisujemy liczbe do tablicy
        else i--; // jesli nie to cofamy sie o jeden i ponownie wczytujemy liczbe
    }
}

int main(){
    int tab[5];
    int N;
    cin >> N;
    if(N <= 0) return 0;
    wczytywanie(tab, 5, N);
    for(int i = 0; i < 5; i++) cout << tab[i] << " "; // wypisanie tablicy
    return 0;
}