


/*
 TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO
*/





// ZADANIE 3 (zad_3.cpp) - 4.5 pkt:
// Napisz program, który:
// - prosi użytkownika (bez komunikatu) o podanie liczby N (maksymalnie 5), która będzie określała liczbę wierszy i kolumn macierzy kwadratowej 
// - wczytuje wartości do tablicy (bez dodatkowego komunikatu) - 0.25 pkt
// - uruchamia funkcję, która wczytuje tablicę (jako argument) i oblicza tzw. ślad macierzy, czyli sumę elementów na głównej przekątnej i zwraca tę wartość jako wynik (1 pkt). Funkcja również sprawdza, czy podana macierz jest górno-, lub dolnotrójkątna i wyświetla odpowiedni komunikat (2 pkt). Funkcja wyświetla następnie transpozycję macierzy (1 pkt).
// - W programie wyświetlana jest wartość śladu macierzy. - 0.25 pkt

#include <iostream>
using namespace std;

int macierzowanie(int tab[5][5], int N){//cala magia w tej funkcji
    
    ///// sprawdzanie czy macierz jest gorno- lub dolnotrojkatna ///// - 2 pkt
    // czyli czy pod/nad przekatna sa same zera
    // | 1 2 3 |  
    // | 0 1 3 |  przyklad gornotrojkatnej
    // | 0 0 5 |
    bool gornotrojkatna = true;
    bool dolnotrojkatna = true;

    // sprawdzanie po trojkacie dzieje sie w forach tzn
    // i jest zawsze cale, a j jest ograniczane
    for (int i = 0; i < N; i++)
    {
        if(!gornotrojkatna) break; // jesli juz wiemy ze nie jest gornotrojkatna to nie ma sensu sprawdzac dalej
        for (int j = 0; j < i; j++) // sprawdzanie czy jest gornotrojkatna
        {
            if(tab[i][j] != 0){
                gornotrojkatna = false;
                break;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if(!dolnotrojkatna) break; // jesli juz wiemy ze nie jest dolnotrojkatna to nie ma sensu sprawdzac dalej
        for (int j = i+1; j < N; j++) // sprawdzanie czy jest dolnotrojkatna
        {
            if(tab[i][j] != 0){
                dolnotrojkatna = false;
                break;
            }
        }
    }
    if(gornotrojkatna && dolnotrojkatna) cout << "Macierz jest gornotrojkatna i dolnotrojkatna!" << endl;
    else if(gornotrojkatna) cout << "Macierz jest gornotrojkatna!" << endl;
    else if(dolnotrojkatna) cout << "Macierz jest dolnotrojkatna!" << endl;
    else cout << "Macierz nie jest gornotrojkatna ani dolnotrojkatna!" << endl;
    

    ///// transpozycja macierzy ///// - 1 pkt
    int tab2[5][5] = {};
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            tab2[i][j] = tab[j][i];
            cout << tab2[i][j] << " ";
        }
        cout << endl;
    }
    
    ///// obliczanie sladu macierzy///// - 1 pkt
    int slad = 0;
    for(int i = 0; i < N; i++){
        slad += tab[i][i];
    }
    return slad;
}

int main(){
    int N;
    cout << "Podaj liczbe wierszy/kolumn N: ";
    cin >> N;
    if(N > 5){
        cout << "Podano zla liczbe wierszy/kolumn!";
        return 0;
    }
    int tab[5][5] = {}; // tworzenie pustej tablicy

    for(int i = 0; i < N; i++){ // wczytywanie tablicy - 0.25 pkt
        for(int j = 0; j < N; j++){
            cin >> tab[i][j];
        }
    }

    cout<<macierzowanie(tab, N)<<endl;
}