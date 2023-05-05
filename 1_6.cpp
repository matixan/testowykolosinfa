#include <iostream>
using namespace std;   

int main(){
    double x;
    cout<<"Podaj ocenę: ";
    cin>>x;
    //przekonwertuj ocene na int aka ucina część ułamkową
    int ocena = (int)x;
    switch (ocena)
    {
    case 1:
        cout<<"Niedostateczny";
        break;
    
    case 2:
        cout<<"Dopuszczający";
        break;

    case 3:
        cout<<"Dostateczny";
        break;

    case 4:
        cout<<"Dobry";
        break;

    case 5:
        cout<<"Bardzo dobry";
        break;

    case 6:
        cout<<"Celujący";
        break;

    default:
        cout<<"Nie ma takiej oceny!";
        break;
    }
    return 0;
}