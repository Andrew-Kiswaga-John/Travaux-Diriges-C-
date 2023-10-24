#include <iostream>

using namespace std;

class Complexe {
private:
    double reelle;
    double imaginaire;

public:
    Complexe() : reelle(0), imaginaire(0) {}

    Complexe(double re, double im) : reelle(re), imaginaire(im) {}

    void afficher() {
        cout << reelle << " + " << imaginaire << "i" << endl;
    }

    Complexe addition(const Complexe& autre) {
        return Complexe(reelle + autre.reelle, imaginaire + autre.imaginaire);
    }

    Complexe soustraction(const Complexe& autre) {
        return Complexe(reelle - autre.reelle, imaginaire - autre.imaginaire);
    }

    Complexe multiplication(const Complexe& autre) {
        double re = reelle * autre.reelle - imaginaire * autre.imaginaire;
        double im = reelle * autre.imaginaire + imaginaire * autre.reelle;
        return Complexe(re, im);
    }

    Complexe division(const Complexe& autre) {
        double denominateur = autre.reelle * autre.reelle + autre.imaginaire * autre.imaginaire;
        double re = (reelle * autre.reelle + imaginaire * autre.imaginaire) / denominateur;
        double im = (imaginaire * autre.reelle - reelle * autre.imaginaire) / denominateur;
        return Complexe(re, im);
    }

    bool estEgal(const Complexe& autre) {
        return (reelle == autre.reelle) && (imaginaire == autre.imaginaire);
    }
};

int main() {
    double re1, im1, re2, im2;

    cout << "Entrez la partie réelle du premier nombre complexe : ";
    cin >> re1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> im1;

    cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    cin >> re2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> im2;

    Complexe complexe1(re1, im1);
    Complexe complexe2(re2, im2);

    int choix;
    cout << "Choisissez l'opération à effectuer :\n";
    cout << "1. Égalité\n";
    cout << "2. Addition\n";
    cout << "3. Soustraction\n";
    cout << "4. Multiplication\n";
    cout << "5. Division\n";
    cin >> choix;

    Complexe resultat;

    switch (choix) {
        case 1:
            if (complexe1.estEgal(complexe2)) {
                cout << "Les nombres complexes sont égaux." << endl;
            } else {
                cout << "Les nombres complexes ne sont pas égaux." << endl;
            }
            break;
        case 2:
            resultat = complexe1.addition(complexe2);
            cout << "Résultat de l'addition : ";
            resultat.afficher();
            break;
        case 3:
            resultat = complexe1.soustraction(complexe2);
            cout << "Résultat de la soustraction : ";
            resultat.afficher();
            break;
        case 4:
            resultat = complexe1.multiplication(complexe2);
            cout << "Résultat de la multiplication : ";
            resultat.afficher();
            break;
        case 5:
            resultat = complexe1.division(complexe2);
            cout << "Résultat de la division : ";
            resultat.afficher();
            break;
        default:
            cout << "Choix invalide." << endl;
    }

    return 0;
}
