#include <iostream>

using namespace std;

int main() {
    int n;
    double somme = 0.0;

    cout << "Entrez la valeur de n : ";
    cin >> n;

    if (n <= 0) {
        cout << "La valeur de n doit être un entier positif." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            somme += 1.0 / i;
        }

        cout << "La somme des " << n << " premiers termes de la série harmonique est : " << somme << endl;
    }

    return 0;
}
