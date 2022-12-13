#include <iostream>
#include <algorithm>

using namespace std;

int wordCounter(string texte, const string &mot) {
    for (char &c: texte) {
        c = tolower(c);
    }

    int compteur = 0;
    size_t indice = texte.find(mot, 0);

    while (indice != string::npos) {
        if ((indice == 0 or isspace(texte[indice - 1])) && isspace(texte[indice + mot.length()])) {
            ++compteur;
        }

        indice = texte.find(mot, indice + mot.length());
    }

    return compteur;
}

int main() {
    string texte = "Les pommes et les belles poires sont LES MEILLEURS FRUITS !";
    string mot = "les";
    auto cnt = wordCounter(texte, mot);
    cout << "Le mot \"" << mot
         << "\" apparait " << cnt
         << " fois dans \"" << texte << "\"" << endl;
}