#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

int main() {
    Lista<int> lisA;
    Lista<int> lisB;
    Lista<int> lisRes;
    lisA.insertar(0,1);
    lisA.insertar(1,1);
    lisA.insertar(2,1);
    lisA.insertar(3,1);
    lisA.insertar(4,1);
    lisB.insertar(0,2);
    lisB.insertar(1,2);
    lisB.insertar(2,2);
    lisB.insertar(3,2);
    lisB.insertar(4,2);
    unir(lisA,lisB)->print();
}