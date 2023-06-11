// Sortowanie bąbelkowe:
#include <iostream>
using namespace std;
void sortowanie_babelkowe(int tab[10], int n){
    for(int i=1; i<n;i++){
        for (int j=1; j<n; j++)
        if(tab[j-1]>tab[j]){
           swap(tab[j],tab[j-1]);
            
        }
    }
}
int main(){
    int tab[5]={};
    for (int i=0; i<5; i++){
        cin>>tab[i];
    }
    sortowanie_babelkowe(tab, 5);
   for (int i=0; i<5; i++){
        cout<<tab[i]<<" ";
    }
    return 0;
}