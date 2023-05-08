#include <iostream>
using namespace std; // I know it's bad practice, but I'm lazy

int findmax(int a, int b, int c){
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << "najwieksa liczba" << findmax(a, b, c);
}