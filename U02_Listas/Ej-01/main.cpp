#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    Lista<int> l;

    l.insertarPrimero(3);
    l.insertarPrimero(2);
    l.insertarPrimero(1);
    l.print();
    l.fnInvierte();
    l.print();

}