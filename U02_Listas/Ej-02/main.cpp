#include <iostream>
#include "../Lista/Lista.h"

void insertarNumeroEn(int pos, int n, Lista<int> l){
    if (pos< l.getTamanio())
        l.insertar(pos,n);
    else
        l.insertarUltimo(n);

}


int main() {
    Lista<int> l;
    int pos;
    int n;
    char condition = 'y';
    while (condition == 'y'){
        cout << "Ingrese posicion: ";
        cin >> pos;
        cout << "Ingrese valor: ";
        cin >> n;
        insertarNumeroEn(pos,n,l);
        /*if (pos< l.getTamanio())
            l.insertar(pos,n);
        else
            l.insertarUltimo(n);*/
        cout << "Desea continuar? [y/n]: ";
        cin >> condition;
    }
    l.print();

}