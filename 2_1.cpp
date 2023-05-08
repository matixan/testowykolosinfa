#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Ile w bok ";
    cin >> a;
    cout << "Ile w dol ";
    cin >> b;
    for(int i = 0; i < b; i++){
        cout<<endl;
    }
    for(int i = 0; i < a; i++){
        cout<<" ";
    }
    cout<<"*";
}