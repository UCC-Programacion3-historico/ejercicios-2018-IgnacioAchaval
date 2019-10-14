#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

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
        if (pos< l.getTamanio())
            l.insertar(pos,n);
        else
            l.insertarUltimo(n);
        cout << "Desea continuar? [y/n]: ";
        cin >> condition;
    }
    l.print();

    int m;
    cout << "ingrese el numero que desea elmiminar: ";
    cin >> m;
    l.removerporValor(m);
    l.print();
}