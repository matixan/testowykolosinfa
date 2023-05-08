#include <iostream>
using namespace std;

void machnij(int tab[13][13], int n){
    for(int i=0; i<(2*n-1); i++){
        for(int j=0; j<(2*n-1); j++) {
            if(i%2||j%2) tab[i][j] = 1; //tworzy kratownice
            if(i%2&&j%2) tab[i][j] = 0; //wywala srodek kratownicy, tworzy szachownice
        }
    }
}

int main(){
    cout<<"podaj n: ";
    int n;
    cin>>n;
    if(n<1 || n>7){
        cout<<"n musi byc z przedzialu [1,7]"<<endl;
        return 0;
    } 
    int tab[13][13] = {};
    machnij(tab, n);
    for(int i=0; i<(2*n-1); i++){ //wypisywanie tablicy
        for(int j=0; j<(2*n-1); j++) {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}