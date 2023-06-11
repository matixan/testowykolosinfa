////////wpisywanie wielu liczb xd ///////

for (int i=0; i<10; i++){
        cin >> tab[i];
    }

////// zliczanie jedynek bitowo przez maske //////

int ile_jedynek(int a){
    if(a==0) return 0;
    int count=0;
    unsigned int maska=0x80000000;
    for(int i=0; i<32; i++){
        if(maska&a) count++;
        maska >>= 1;
    }
    return count;
}

///// zwraca modul liczby zespolonej ////
#include <cmath>
double modul(double tab[2][N], int idx)
{
    double Re = tab[0][idx];
    double Im = tab[1][idx];
    return sqrt(Re * Re + Im * Im); // pierwiastek z sumy kwadratow
}