#include <iostream>

using namespace std;

int main() {
   
    int tableau[10];

   
    cout << "Veuillez entrer 10 entiers : " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tableau[i];
    }

   
    int echange;
    do {
        echange = 0;
        for (int i = 0; i < 9; i++) {
            if (tableau[i] > tableau[i + 1]) {
                int temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                echange = 1;
            }
        }
    } while (echange);

    
    cout << "Tableau trié par ordre croissant : ";
    for (int i = 0; i < 10; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
