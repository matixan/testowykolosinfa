#include <iostream>
using namespace std;

void wypisz(unsigned int a){ //funkcja do wypisywania liczb w różnych systemach liczbowych
    //generalnie to chyba wystarczylo tylko pozliczac ale zadanie jest niejasno sformulowane

    //binarnie
    cout<<"binarnie: ";
    unsigned int maska = 1;
    maska <<= 31; 
    int ile_miejsc = 0;
    bool znaleziono_jedynke = false; //zmienna pomocnicza do sprawdzania czy znaleziono już jedynkę
    for(int i = 0; i < 32; i++){ //bo int ma 32 bity
        if(a & maska){
            znaleziono_jedynke = true; //jeżeli znaleziono jedynkę to znaczy że już nie ma zer wiodących
            cout<<"1";
            ile_miejsc++;
        }else if(znaleziono_jedynke){ 
            cout<<"0";
            ile_miejsc++;
        }
        maska >>= 1;
    }
    if(ile_miejsc == 0) cout<<"0";
    cout<<"\nilość miejsc: "<<ile_miejsc;

    //ósemkowo
    cout<<"\nósemkowo: ";
    unsigned int dzielnik; 
    ile_miejsc = 0;
    unsigned int buff = a; //zmienna pomocnicza do dzielenia
    unsigned int potega = 1; 
    unsigned int wynik = 0; //zmienna do przechowywania wyniku
    while(buff != 0){
        dzielnik = buff%8; //dzielenie modulo 8 (reszta z dzielenia)
        buff /= 8; //dzielenie całkowite przez 8
        ile_miejsc++; //zliczanie miejsc
        wynik += dzielnik*potega; //dodawanie do wyniku reszty z dzielenia razy potęga
        potega *= 10;
    }
    cout<<wynik;
    cout<<"\nilość miejsc: "<<ile_miejsc;

    //szesnastkowo
    cout<<"\nszesnastkowo: ";

    ile_miejsc = 0;
    buff = a;
    potega = 1;
    string wynik_odwrocony; //zmienna do przechowywania wyniku ale trzeba go pozniej napisac od tylu
    while(buff != 0){
        dzielnik = buff%16; //dzielenie modulo 16 (reszta z dzielenia)
        if(dzielnik >= 10) wynik_odwrocony += (char)(dzielnik+55); //jeżeli dzielnik jest większy lub równy 10 to dodajemy do wyniku znak odpowiadający liczbie szesnastkowej (A-F)
        else wynik_odwrocony += (char)(dzielnik+48); //bo szesnastkowo 0-9 to 48-57 w ASCII
        buff /= 16; //dzielenie całkowite przez 16
        ile_miejsc++; //zliczanie miejsc
        potega *= 10;
    }
    //odwracanie wyniku aby był w dobrej kolejności
    int i = 0, j = wynik_odwrocony.length()-1;
    while (i < j)
    {
        char temp = wynik_odwrocony[i];
        wynik_odwrocony[i] = wynik_odwrocony[j];
        wynik_odwrocony[j] = temp;
        i++;
        j--;
    }
    //wypisywanie wyniku
    cout<<wynik_odwrocony;
    cout<<"\nilość miejsc: "<<ile_miejsc;

    //dziesiętnie tu nie trzeba niczego wyjasniac
    cout<<"\ndziesiętnie: "<<a;
    ile_miejsc = 0;
    while(a != 0){
        a /= 10;
        ile_miejsc++;
    }

    cout<<"\nilość miejsc: "<<ile_miejsc;



}

int main(){
    int a;
    cout<<"Podaj liczbę: ";
    cin>>a;
    if(a < 0){ //ignoruje ujemne liczby do latwiejszej obslugi
        cout<<"\nLiczba nie może być ujemna!";
        return 0;
    }
    wypisz(a); //wywołanie funkcji, w
}