// Sortowanie przez wybór
#include <iostream>
using namespace std;
void sortowanie_przez_wybor(int tab[5], int n){
int min;
        for(int i=0;i<n-1;i++){
            min=i;
            for(int j=i+1;j<n; j++){
            if(tab[min]>tab[j]){
                min=j;
                swap(tab[i],tab[min]);
            }
            }
        }
}
int main(){
    int tab[5]={};
    for (int i=0; i<5; i++){
        cin>>tab[i];
    }
    sortowanie_przez_wybor(tab, 5);
   for (int i=0; i<5; i++){
        cout<<tab[i]<<" ";
    }
    return 0;
}