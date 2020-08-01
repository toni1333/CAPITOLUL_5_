#include <iostream>
using namespace std;

void Ameteala(int parSiVal,int& parTyRef,int* parTotPont){
    parSiVal *=3;
    parTyRef *=3;
    *parTotPont *=2;
    }
int main(){
    int drunkenRat=36;
    Ameteala(drunkenRat,drunkenRat,&drunkenRat);
    cout<<drunkenRat;

    return 0;
    }
