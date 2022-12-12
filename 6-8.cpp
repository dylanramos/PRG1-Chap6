#include <iostream>

using namespace std;

int convertir(char nombreRomain) {
    int nombreEntier = 0;

    switch (nombreRomain) {
        case 'I':
            nombreEntier += 1;
            break;
        case 'V':
            nombreEntier += 5;
            break;
        case 'X':
            nombreEntier += 10;
            break;
        case 'L':
            nombreEntier += 50;
            break;
        case 'C':
            nombreEntier += 100;
            break;
        case 'D':
            nombreEntier += 500;
            break;
        case 'M':
            nombreEntier += 1000;
            break;
    }

    return nombreEntier;
}

int convertirNombreRomainEnEntier(string nombreRomain) {
    int nombreEntier = 0;

    for (int i = nombreRomain.length() - 1; i >= 0; --i) {
        nombreEntier += convertir(nombreRomain[i]);

        if (convertir(nombreRomain[i - 1]) < convertir(nombreRomain[i])) {
            nombreEntier -= convertir(nombreRomain[i - 1]);
            --i;
        }
    }

    return nombreEntier;
}

int main(){
    string n1 = "MMMCXCVIII";
    cout << convertirNombreRomainEnEntier(n1) << endl;
    return 0;
}