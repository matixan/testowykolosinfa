#include <iostream>
using namespace std;

void histogram(int tab[], int n, int hist[]){
    for(int i=0; i<n; i++){
        hist[tab[i]]++; //indeks tablicy hist odpowiada liczbie, a wartosc pod tym indeksem odpowiada ilosci wystapien danej liczby
    }
}

int main(){
    int n;
    cout<<"podaj n: ";
    cin>>n;
    if(n>=100){
        cout<<"n musi byc z mniejsze od 100"<<endl;
        return 0;
    }
    int tab[100] = {};
    for(int i=0; i<n; i++){
        cout<<"\npodaj "<<i+1<<" liczbe: ";
        int a;
        cin>>a;
        if(a<0 || a>9){
            cout<<"liczba musi byc z przedzialu [0,9]"<<endl; //sprawdzanie czy liczba jest z przedzialu [0,9] jesli nie to wpisz ponownie
            i--;
        }
        else tab[i]=a;
    }
    int hist[10] = {};
    histogram(tab, n, hist);
    cout<<"histogram: "<<endl; //wypisywanie histogramu
    for(int i=0; i<10; i++){
        cout<<hist[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<10; i++){ //wypisywanie osi histogramu
        cout<<i<<" ";
    }
    return 0;
}