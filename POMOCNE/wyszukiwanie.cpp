//szukanie binarne zwraca indeks, ilosc jest przez referencje
int znajdz(string tab[], string szukane, int b, int e, int &ilosc){
    while(b<=e){
        int m=b+(e-b)/2;
        if(tab[m]>szukane) e=m-1;
        if(tab[m]<szukane) b=m+1;
        if(tab[m]==szukane) {
            int p=m;
            int l=m;
            while(tab[p++]==szukane) ilosc++;
            while(tab[--m]==szukane) ilosc++;
            if(m+1==l) return l;
            return m+1;
        }
        //cout<<"b="<<b<<" m="<<m<<" e="<<e<<" tab[m]="<<tab[m]<<endl;        
    } 
	return 0;
}