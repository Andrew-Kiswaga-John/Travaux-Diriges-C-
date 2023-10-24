#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    cout << "Table de multiplication de 1 à 10" << endl;

    
    cout << setw(5) << "x";
    for (int i = 1; i <= 10; i++) {
        cout << setw(5) << i;
    }
    cout << endl;

    
    for (int i = 1; i <= 10; i++) {
        cout << setw(5) << i;
        for (int j = 1; j <= 10; j++) {
            cout << setw(5) << i * j;
        }
        cout << endl;
    }

    return 0;
}
