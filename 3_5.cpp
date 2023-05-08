# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"podaj n: ";
    cin>>n;
    if(n>25){
        cout<<"n musi byc z mniejsze od 26"<<endl;
        return 0;
    }
    int tab[25] = {};
    for(int i=0; i<n; i++){
        cout<<"\npodaj "<<i+1<<" liczbe: ";
        cin>>tab[i];
    }
    int X;
    cout<<"\npodaj X: ";
    cin>>X;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){//j=i zeby nie sprawdzac tych samych par
            if(tab[i]+tab[j]==X){
                cout<<"znaleziono pary: "<<tab[i]<<" "<<tab[j]<<endl;
            }
        }
    }

    //nie wiem czy dobrze zrozumialem zadanie, ale jesli chodzi o to zeby nie sprawdzac tych samych par to tak to zrobilem
    //jesli chodzi o to zeby nie sprawdzac tych samych liczb to skip
    return 0;
}