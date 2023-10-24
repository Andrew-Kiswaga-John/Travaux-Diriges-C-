# include <iostream>

using namespace std;

int main() {
    int n;


    cout << "Entrez la taille du tableau : ";
    cin >> n;
    
    
    int* tableau = new int[n];

    cout << "Entrez " << n << " nombres : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> tableau[i];
    }

    int* carres = new int[n];

    for (int i = 0; i < n; i++) {
        carres[i] = tableau[i] * tableau[i];
    }


    cout << "Carrés des nombres : ";
    for (int i = 0; i < n; i++) {
        cout << carres[i] << " ";
    }
    

    delete[] tableau;
    delete[] carres;

    return 0;
}
