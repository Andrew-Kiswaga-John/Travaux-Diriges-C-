#include <iostream>
using namespace std;


void incrementer(int* n) {
    (*n)++;
}


void permuter(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    
    incrementer(&x);

    cout << "Après appel à incrementer : x = " << x << endl;

    
    permuter(x, y);

    cout << "Après appel à permuter : x = " << x << ", y = " << y << endl;

    return 0;
}
