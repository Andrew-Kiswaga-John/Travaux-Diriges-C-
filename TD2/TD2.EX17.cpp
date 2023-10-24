#include <iostream>
#include <string>

using namespace std;

class DateHeure {
private:
    string chaineDateHeure;
    string jour;
    string mois;
    string annee;
    string heure;
    string minute;

public:
    DateHeure(const string& chaine) : chaineDateHeure(chaine) {
        extraireChamps();
    }

    void extraireChamps() {
        if (chaineDateHeure.length() != 12) {
            cout << "Format de chaîne invalide. Assurez-vous qu'il s'agit de 12 caractères." << endl;
            
        }

        jour = chaineDateHeure.substr(0, 2);
        mois = chaineDateHeure.substr(2, 2);
        annee = chaineDateHeure.substr(4, 4);
        heure = chaineDateHeure.substr(8, 2);
        minute = chaineDateHeure.substr(10, 2);
    }

    void afficherChamps() {
        cout << "Jour : " << jour << endl;
        cout << "Mois : " << mois << endl;
        cout << "Année : " << annee << endl;
        cout << "Heure : " << heure << endl;
        cout << "Minute : " << minute << endl;
    }
};

int main() {
    string chaineDateHeure;
    cout << "Entrez une date et une heure au format JJMMAAAAHHNN : ";
    cin >> chaineDateHeure;

    DateHeure parser(chaineDateHeure);
    parser.afficherChamps();

    return 0;
}
