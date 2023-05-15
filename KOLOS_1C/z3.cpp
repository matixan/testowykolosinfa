// // Napisz program, który:
// // - Prosi użytkownika (bez komunikatu) o podanie liczb całkowitych M i N (obie wartości maksymalnie 10), 
// // które będą określały odpowiednio liczbę wierszy i kolumn tablicy typu string.
// // - Wczytuje podawane przez użytkownika elementy tablicy MxN. W każdej komórce tablicy 
// // zapisywane jest pojedyncze słowo - 0.25 pkt
// // - Wczytuje podaną przez użytkownika małą literę, która będzie szukana w tablicy słów.
// // - Sprawdza, czy podany znak jest małą literą (zakres kodów ASCII: od 97 do 122). 
// // Jeżeli podany znak nie jest literą, wyświetla komunikat "BŁĄD" i kończy działanie  - 0.25 pkt
// // - Uruchamia funkcję, która wczytuje jako argumenty: tablicę słów, M, N, szukaną literę, 
// // oraz tablicę jednowymiarową typu całkowitego.
// // - Funkcja sprawdza ile razu wystąpiła w danym wierszu litera podana jako argument funkcji 
// // i zapisuje wartość do tablicy jednowymiarowej - 3 pkt
// // - Program wyświetla ile razy znak wystąpił w danym wierszu - 0.5 pkt

#include <iostream>
using namespace std;

void szukanie(string tablica[10][10], int M, int N, char wzor, int ilosc[10]){
    
    for(int i=0; i<M; i++){ // petla po kolumnach
        for(int j=0; j<N; j++){ // petla po wierszach
            string bufor=tablica[i][j]; // buforuje stringa z tablicy
            for(int k=0; k<tablica[i][j].length(); k++){ // petla po stringu
                if(wzor==bufor[k]) ilosc[i]++; // jezeli znak z stringa jest taki sam jak wzor to zwieksza ilosc wystapien
            }
        }
    }
}

int main(){
    int M, N;
    cout<<"Podaj M: ";
    cin>>M;
    cout<<"Podaj N: ";
    cin>>N;
    if(M>10||N>10||N<1||M<1) return 0; // - Prosi użytkownika (bez komunikatu) o podanie liczb całkowitych M i N (obie wartości maksymalnie 10),
    string tablica[10][10];
    for(int i=0; i<M; i++){ // - Wczytuje podawane przez użytkownika elementy tablicy MxN. W każdej komórce tablicy zapisywane jest pojedyncze słowo
        for(int j=0; j<N; j++){
            cin>>tablica[i][j];
        }
    }
    cout<<"podaj szuakny znak: "; // - Wczytuje podaną przez użytkownika małą literę, która będzie szukana w tablicy słów.
    char znak;
    cin>>znak;
    if(znak<97||znak>122){
        cout<<"blad";
        return 0;
    }
    cout<<"szukam..."<<endl;
    int ilosc[10]={};
    szukanie(tablica, M, N, znak, ilosc);
    for(int i=0; i<N;i++){ // wyświetla ile razy znak wystąpił w danym wierszu
        cout<<"wiersz "<<i<<", wzor wystapil "<<ilosc[i]<<" razy\n";
    }
    
}