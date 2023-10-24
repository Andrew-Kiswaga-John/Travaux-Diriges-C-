#include <iostream>

using namespace std;

int main() {
    int c = 3; 
    int& ref = c; 
    int* p = &c;  

   
    cout << "Entier c : " << c << endl;
    cout << "Adresse de c : " << &c << endl;
    cout << "Référence ref : " << ref << endl;
    cout << "Adresse de ref : " << &ref << endl;
    cout << "Pointeur p : " << *p << endl;
    cout << "Adresse de p : " << p << endl;

    return 0;
}






