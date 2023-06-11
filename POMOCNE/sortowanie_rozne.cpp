string imiona[10] = {"Ala", "Ela", "Ela", "Ela", "Ela", "Iza", "Jan", "Leon", "Ola", "Ula"}; //posortowane

////sortowanie po pierwszej literze imienia////

void sortowanie(string imiona[], int size){
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (imiona[j] > imiona[j + 1]) {
                swap(imiona[j], imiona[j + 1]);
            }
        }
    }
}

/////////// bombelkowe ////////////

void sortowanie(double tab[], int N){
    bool sorted=1;
    for (int j=0; j<N; j++){
        for (int i=0; i<N-1-j; i++){
            if(tab[i]>tab[i+1]){
                double temp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
                sorted=0;
            }
        }
        if(sorted) return;
        sorted=1;
    }
}

//////////// wybieranie /////////

void sortowanie(int tab[], int N){//wybieranie
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            int A=ile_jedynek(tab[i]);
            int B=ile_jedynek(tab[j]);
            if(A>B || (A==B && tab[j]<tab[i])) {
                int temp=tab[j];
                tab[j]=tab[i];
                tab[i]=temp;
            }
        }
    }
}

///////////// wstawianie /////////

void sortowanie_przez_wstawianie(int n, int *tab)
{
     int pom, j;
     for(int i=1; i<n; i++)
     {
             //wstawienie elementu w odpowiednie miejsce
             pom = tab[i]; //ten element będzie wstawiony w odpowiednie miejsce
             j = i-1;
             
             //przesuwanie elementów większych od pom
             while(j>=0 && tab[j]>pom) 
             {
                        tab[j+1] = tab[j]; //przesuwanie elementów
                        --j;
             }
             tab[j+1] = pom; //wstawienie pom w odpowiednie miejsce
     }     
}

///////// koktajlowe imiona /////////

void sortowanie(string tab[], int n) // pierwszy element zbioru ma indeks 0
{
    int bottom = 0;
    int top = n - 1;
    bool zamiana = true;
    while(zamiana == true) // jeżeli żaden element nie został zamieniony, lista jest posortowana
    {
        zamiana = false;
        for(int i = bottom; i < top; i = i + 1)
        {
            int A=tab[i].length();
            int B=tab[i+1].length();
            if(A > B || (A==B && tab[i][1]>tab[i+1][1]))  // sprawdzamy czy elementy są na właściwych miejscach
            {
                swap(tab[i], tab[i + 1]); // zamieniamy elementy miejscami
                zamiana = true;
            }
        }
        // zmniejszamy wartość `top` ponieważ element o największej wartości jest posortowany 
        top = top - 1;
        for(int i = top; i > bottom; i = i - 1)
        {
            int A=tab[i].length();
            int B=tab[i-1].length();
            if(A < B || (A==B && tab[i][1]<tab[i-1][1]))
            {
                swap(tab[i], tab[i - 1]);
                zamiana = true;
            }
        }
        // zwiększamy wartość `bottom` ponieważ element o najmniejszej wartości jest posortowany 
        bottom = bottom + 1;
    }
}

/////////// zwykly quick sort//////////

void quicksort(int tab[], int min, int max){
    if(min>=max) return; //warunek koncowy
    int idxPivot=min+(max-min)/2;
    int i=min-1;
    int j=max+1;
    int pivot=tab[idxPivot];
    // for(int i=min; i<=max; i++){
    //     cout<<tab[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<10; i++){
    //     cout<<tab[i]<<" ";
    // }
    // cout<<"\nmin: "<<min<<" max: "<<max<<" IDX_Pivot "<<idxPivot<<endl;
    
    while(1){
        while(tab[++i]<pivot);
        while(tab[--j]>pivot);
        if(i<=j){
            swap(tab[i], tab[j]);
        }
        else break;
    }
    if(min<j) quicksort(tab, min, j);
    if(i<max) quicksort(tab, i, max);
}


//////////////// quick sort zespolone ///////////////////

void quicksort(double tab[2][N], int lewo, int prawo)
{
    if (lewo >= prawo) return;
    double pivot = modul(tab, lewo + (prawo - lewo) / 2);
    int i = lewo-1;
    int j = prawo+1;

    while (1)
    {
        while (modul(tab, ++i) < pivot);
        while (modul(tab, --j) > pivot);
        if (i <= j)
        {
            swap(tab[0][i], tab[0][j]);
            swap(tab[1][i], tab[1][j]);
        }
        else
            break;
    }
    if(lewo<j) quicksort(tab, lewo, j);
    if(i<prawo) quicksort(tab, i, prawo);
}