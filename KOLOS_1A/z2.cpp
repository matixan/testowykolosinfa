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

int liczbawystapienliter(string tekst){

    //return tekst.length(); //zwraca dlugosc tekstu, ale nie mozna uzyc bo liczy spacje i znaki specjalne a nas interesuja same literki
    
    int licznik=0;
    for(int i=0; i<tekst.length(); i++){ //petla przechodzaca przez caly tekst
        if((tekst[i]>=65 && tekst[i]<=90) || (tekst[i]>=97 && tekst[i]<=122)) licznik++; //jesli znak jest litera to zwieksz licznik
    }
    return licznik;
}

int znajdzwzorzec(string tekst, string wzorzec){

    //zaczynamy od sprawdzenia czy wzorzec jest dluzszy od tekstu

    if(wzorzec.length()>tekst.length()) return 0; //jesli tak to nie ma sensu szukac bo nie znajdziemy, przy okazji bedzie to warunek zakonczenia rekurencji
    if(wzorzec.length()==0) return 0; //jesli wzorzec jest pusty to tez


    //takie pewne uproszczenie, ale troche nie pasuje w definicje tej calej "rekurencji"

    // if(wzorzec.length()==1){ //jesli wzorzec ma dlugosc 1 to mozemy zrobic to szybciej
    //     int licznik = 0;
    //     for(int i=0; i<tekst.length(); i++){ //petla przechodzaca przez caly tekst
    //         if(tekst[i]==wzorzec[0]) licznik++; //jesli znak w tekscie jest taki sam jak w wzorcu to zwieksz licznik
    //     }
    //     return licznik;
    // }

    //jesli nie to szukamy wzorca w tekscie
    bool znaleziono = false;
    for(int i=0; i<wzorzec.length(); i++){ //petla przechodzaca przez caly wzorzec
        if(tekst[i]!=wzorzec[i]){ //jesli znak w tekscie nie jest taki sam jak w wzorcu to nie ma sensu szukac dalej
            znaleziono = false; //ustawienie zmiennej logicznej na false
            break;
        }
        else znaleziono = true;
    }
    //jesli sie zna komendy to jest taka sprytna funkcja ktora skraca stringa o 1
    int licznik = znajdzwzorzec(tekst.substr(1+znaleziono*wzorzec.length()), wzorzec); //rekurencyjne wywolanie funkcji, ktora bedzie szukac wzorca w tekscie bez pierwszej litery
    //1+znaleziono*wzorzec.length()) zawsze psesuwamy o 1 i o dlugość wzorca, jesli znaleziono to o dlugosc wzorca + 1, jesli nie to o 1
    
    //cout<<endl<<tekst; //wyswietlenie tekstu 
    
    return licznik+znaleziono; //zwrocenie liczby wystapien wzorca w tekscie
}

int main(){
    string tekst, wzorzec;
    getline(cin, tekst); //wczytanie tekstu z spacjami bo cin nie wczytuje spacji i mysli ze to enter
    cin>>wzorzec; //wczytanie wzorca mozna uzyc cin poniewaz nie ma spacji
    if(tekst.length()==0 || wzorzec.length()==0) return 0; //jesli ktorys z tekstow jest pusty to co ty chcesz niby sprawdzic
    cout<<endl<<liczbawystapienliter(tekst);
    cout<<endl<<znajdzwzorzec(tekst, wzorzec);
}