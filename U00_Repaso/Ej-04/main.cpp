#include <iostream>

using namespace std;

int convertToHours (int entry)
{
    int hor = entry / 3600;
    return hor;
}
int convertToMinutes(int entry){
    int min = (entry % 3600) / 60;
    return min;
}
int convertToSeconds(int entry){
    int seg = (entry % 3600) % 60;
    return seg;
}

int main() {
    int misSegundos = 0;
    cout << "Ingrese los segundos a calcular: ";
    cin >> misSegundos;
    cout << convertToHours(misSegundos) << ":" << convertToMinutes(misSegundos) << ":" << convertToSeconds(misSegundos);
    return 0;
}
