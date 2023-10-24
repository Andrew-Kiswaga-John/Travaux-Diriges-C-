#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int u1 = 1;
        int u2 = 1;
        int un = 0;

        for (int i = 3; i <= n; i++) {
            un = u1 + u2;
            u1 = u2;
            u2 = un;
        }

        return un;
    }
}

int main() {
    int n;

    cout << "Entrez la valeur de n : ";
    cin >> n;

    if (n < 1) {
        cout << "La valeur de n doit être un entier positif." << endl;
    } else {
        int resultat = fibonacci(n);
        cout << "La " << n << "e valeur de la suite de Fibonacci est : " << resultat << endl;
    }

    return 0;
}
