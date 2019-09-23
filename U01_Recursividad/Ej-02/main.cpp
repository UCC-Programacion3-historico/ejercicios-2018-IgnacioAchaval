#include <iostream>
#include "sumatoria.h"

using namespace std;

int main() {
    int tam = 0;
    cout << "ingrese tamano array: ";
    cin >> tam;
    int arr1[tam];
    for(int i=0;i<=tam;i++){
        cout<<"ingrese el valor en la pos " << i << ": ";
        cin>>arr1[i];
    }
    cout<<"la sumatoria es: ";
    cout<<sumatoria(arr1,tam);
    return 0;
}