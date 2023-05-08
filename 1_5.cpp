#include <iostream>
using namespace std;

void weztoobczaj(char trybik){
    switch (trybik)
    {
    case 'a':
        cout<<"Podaj bok kwadratu: ";
        int a;
        cin>>a;
        cout<<"Pole kwadratu wynosi: "<<a*a;
        break;
    
    case 'b':
        cout<<"Podaj boki prostokąta: ";
        int b, c;
        cin>>b>>c;
        cout<<"Pole prostokąta wynosi: "<<b*c;
        break;

    case 'c':
        cout<<"Podaj podstawę i wysokość trójkąta: ";
        int d, e;
        cin>>d>>e;
        cout<<"Pole trójkąta wynosi: "<<d*e/2;
        break;

    case 'd':
        cout<<"Podaj podstawy i wysokość trapezu: ";
        int f, g, h;
        cin>>f>>g>>h;
        cout<<"Pole trapezu wynosi: "<<(f+g)*h/2;
        break;

    default:
        cout<<"Nie ma takiego trybu!";
        break;
    }
}

int main(){
    char typ;
    cout<<"W zależności od podanego znaku, program powinien policzyć odpowiednie pole: a- pole kwadratu, b- pole prostokąta, c- pole trójkata, d - pole trapezu.\n";
    cin >> typ;
    weztoobczaj(typ);
}