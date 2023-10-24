#include <iostream>

using namespace std;

int main() {
    int hauteur;
    
    cout << "Combien de lignes ? ";
    cin >> hauteur;

    if (hauteur < 1) {
        cout << "La hauteur doit être un entier positif." << endl;
    } else {
        for (int ligne = 1; ligne <= hauteur; ligne++) {
          
            for (int espace = 1; espace <= hauteur - ligne; espace++) {
                cout << " ";
            }

            
            for (int etoile = 1; etoile <= 2 * ligne - 1; etoile++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    return 0;
}
