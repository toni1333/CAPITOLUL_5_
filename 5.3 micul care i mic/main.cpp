#include <iostream>
#include <cstring>
#include <cctype>

typedef unsigned short us;
using namespace std;

int main(){
    char sir[20];
    cout<<"Introduceti sirul de caractere fara spatiu: "<<endl;
    cin >> sir; cout<<endl;
    cout <<sir<< endl;
    for(us i=0;i<(strlen(sir));++i){       // limitez iteratiile la sirul introdus
    if(islower(sir[i])){
    sir[i]=toupper(sir[i]);}
    else if (isupper(sir[i])){
    sir[i]=tolower(sir[i]);}
    }
    cout<<endl;
    cout<<sir<<endl;
    cout<<"Ati introdus: "<<strlen(sir)<<" caractere"<<endl;          // am facut suplimentar..
    cout<<"Marimea sirului declarat initial: "<<sizeof sir<<" de elemente";

    return 0;
}
