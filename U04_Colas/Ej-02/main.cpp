#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"
using namespace std;

int main() {
    Cola<char> col1;
    Pila<char> pil1;
    char palindromo[100];

    cout << "Ingrese la frase a analizar: ";
    cin >> palindromo;

    for (int i = 0; palindromo[i] != '\0'; ++i) {
        col1.encolar(palindromo[i]);
        pil1.push(palindromo[i]);
    }

    int flag=1;
    while (!col1.esVacia() && !pil1.esVacia()){
        if(col1.desencolar()!=pil1.pop())
            flag = 0;
    }
    if(flag==0)
        cout << "No es Palindromo";
    else
        cout << "Es Palindromo";


}