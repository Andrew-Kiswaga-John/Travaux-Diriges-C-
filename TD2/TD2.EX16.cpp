#include <iostream>

using namespace std;

class Liste {
private:
    struct Element {
        int valeur;
        Element* suivant;
        Element(int val) : valeur(val), suivant(nullptr) {}
    };

    Element* premier;

public:
    Liste() : premier(nullptr) {}

    void ajouterElement(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    
    void supprimerElement() {
        if (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

  
    void afficherListe() {
        Element* courant = premier;
        while (courant) {
            cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        cout << endl;
    }

    ~Liste() {
        while (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }
};

int main() {
    Liste maListe;

    maListe.ajouterElement(50);
    maListe.ajouterElement(70);
    maListe.ajouterElement(100);

    cout << "Liste initiale : ";
    maListe.afficherListe();

    maListe.supprimerElement();
    cout << "Liste après suppression : ";
    maListe.afficherListe();

    return 0;
}
