#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool estValide(string mot) {
    const vector<string> MOTS_RESERVES = {"short", "int", "double", "long", "long long", "float", "const"};

    return find(MOTS_RESERVES.begin(), MOTS_RESERVES.end(), mot) == MOTS_RESERVES.end();
}

int main() {
    cout << "Entrez un mot: " << endl;
    string mot;
    cin >> mot;

    if (estValide(mot)) {
        cout << "Mot valide" << endl;
    } else {
        cout << "Mot invalide" << endl;
    }
}
