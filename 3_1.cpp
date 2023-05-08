#include <iostream>
using namespace std;

int main(){
    cout<<"podaj n: ";
    int n;
    cin>>n;
    if(n<1 || n>7){
        cout<<"n musi byc z przedzialu [1,7]"<<endl;
        return 0;
    } 
    int tab[13][13] = {};

    for(int i=0; i<(2*n-1); i++){
        for(int j=0; j<(2*n-1); j++) {
            if(i==j) tab[i][j] = 1;
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}