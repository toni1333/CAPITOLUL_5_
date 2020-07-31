#include <iostream>
#include "operatii.h"

using namespace std;

void functie(){
    cout << "Introduce-ti operatia pe care vreti sa o efectuati: "<<endl;
    cout << "1-adunare   2-scadere  3-inmultire  4-impartire   5-modulo"<<endl;
}

int main()
{
    functie();
    short selector;
    int x, y;
    cin >>selector;
    while ((selector<1) || (selector>5)){
    cout << "Eroare! N-ati introdus un numar intre 1 si 5, va rugam mai incercati odata!.."<<endl;
    cin >> selector;
    }
    cout << "Introduce-ti numarul 1: "<<endl;
    cin >> x;
    cout << "Introduce-ti numarul 2: "<<endl;
    cin >> y;

    switch (selector){
    case 1: cout<<x<<" + "<<y<<" = "<<adunare(x, y); break;
    case 2: cout<<x <<" - "<<y<<" = "<<scadere(x, y); break;
    case 3: cout<<x<<" * "<<y<<" = "<<inmultire(x, y); break;
    case 4: while(y==0){
    cout<<"Impartirea la 0 nu este posibila,introduce-ti din nou numarul 2: "<<endl;
    cin>>y;}
    cout<<x<<" / "<<y<<" = "<<impartire(x, y); break;
    case 5: while(y==0){
    cout<<"Impartirea la 0 nu este posibila,introduce-ti din nou numarul 2: "<<endl;
    cin>>y;}
    cout <<x<<" % "<<y<<" = "<<modulo(x, y); break;
}

    return 0;
}
