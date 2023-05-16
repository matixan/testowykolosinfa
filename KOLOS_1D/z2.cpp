// ZADANIE 2 (zad_2.cpp) - 3.5 pkt:
// Napisz program, który:
// - Wczytuje podany przez użytkownika ciąg znaków (zmienna typu string).
// - Uruchamia funkcję rekurencyjną (nie można używać pętli w funkcji), która wyświetli podany ciąg znaków z podziałem na wiersze. 
// Podział następuje w miejscach występowania znaków interpunkcyjnych (program musi wykrywać . , : ;). (2.5 pkt). 
// Program oblicza również ilość znaków w każdym wyświetlonym wierszu (1 pkt). 

// Przykład działania:

// Ala ma i kota, i psa. Ola ma: kot, psa i chomika.
// Ala ma i kota,14
// i psa.7
// Ola ma:8
// kota,6
// psa i chomika.15

#include <iostream>
using namespace std;

void czastkowanie(string zdanie){ // z uwagi na to ze nie mozna uzyc petli w funkcji rekurencyjnej to trzeba uzyc funkcji substr() ktora zwraca krotszego stringa
    if (zdanie.length() == 0) return; // warunek konca rekurencji// zwraca 0 bo nie ma znakow
    cout << zdanie[0]; // wypisuje aktualnie pierwszy znak
    if (zdanie[0] == '.' || zdanie[0] == ',' || zdanie[0] == ':' || zdanie[0] == ';') cout<<zdanie.length()<<endl; // jezeli znak jest interpunkcyjny to wypisuje enter
    czastkowanie(zdanie.substr(1));
    return;
}

// czas mi sie skonczyl ale tu jest kod ktory dziala ale musial chatGPT pomoc xdd

void czastkowanie2(string zdanie, string wiersz = "") {
    if (zdanie.length() == 0) {
        cout << wiersz << wiersz.length() << endl; // wyświetlanie ostatniego wiersza i ilości znaków w nim
        return; // warunek konca rekurencji
    }
    if (zdanie[0] == '.' || zdanie[0] == ',' || zdanie[0] == ':' || zdanie[0] == ';') { // sprawdzanie, czy znak jest interpunkcyjny
        cout << wiersz << zdanie[0] << wiersz.length()+1 << endl; // wyświetlanie dotychczasowego wiersza, znaku interpunkcyjnego i dlugosci wiersza
        wiersz = ""; // resetowanie wiersza
    } else {
        wiersz += zdanie[0]; // dodawanie znaku do aktualnego wiersza
    }
    czastkowanie2(zdanie.substr(1), wiersz); // wywołanie rekurencyjne z podciągiem od drugiego znaku
}

int main(){
    string zdanie;
    getline(cin, zdanie);
    czastkowanie(zdanie); // przyjmuje ze jednak liczenie znakow odbywa sie w rekurencji a nie w programie bo inaczej nie ma sensu
    cout<<endl<<endl;
    czastkowanie2(zdanie); // dzialajaca z pomoca chatGPT
    return 0; //cout zeby wyswietlic ostatnie zliczenie znakow
}

