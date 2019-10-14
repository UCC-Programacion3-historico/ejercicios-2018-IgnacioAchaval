#include <iostream>
#include "../Cola/Cola.h"

using namespace std;

int main() {
    Cola<int> col1;
    Cola<int> col2;
    int flag=1;

    for(int i=1; i<21;++i){
        col1.encolar(i);
    }
    for(int i=0;i<20;++i){
        col2.encolar(i);
    }
    while(!col1.esVacia() && !col2.esVacia()){
        if(col1.desencolar()!=col2.desencolar())
            flag=0;
    }

    if(flag==0)
        cout << "Son Distintas" << endl;
    else
        cout << "Son Iguales" << endl;
    return 0;
}