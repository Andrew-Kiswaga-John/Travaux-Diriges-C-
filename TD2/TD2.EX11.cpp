#include <iostream>
#include <cmath>

using namespace std;

class Vecteur3D {
private:
    float x;
    float y;
    float z;

public:
    Vecteur3D(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    Vecteur3D somme(const Vecteur3D& autre) const {
        return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
    }

    float produitScalaire(const Vecteur3D& autre) const {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    bool coincide(const Vecteur3D& autre) const {
        return (x == autre.x) && (y == autre.y) && (z == autre.z);
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    static Vecteur3D& normax(Vecteur3D& v1, Vecteur3D& v2) {
        if (v1.norme() >= v2.norme()) {
            return v1;
        } else {
            return v2;
        }
    }
};

int main() {
    Vecteur3D v1(1.0, 2.0, 3.0);
    Vecteur3D v2(4.0, 5.0, 6.0);

    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    Vecteur3D somme = v1.somme(v2);
    cout << "Somme des vecteurs : ";
    somme.afficher();

    float produit = v1.produitScalaire(v2);
    cout << "Produit scalaire des vecteurs : " << produit << endl;

    if (v1.coincide(v2)) {
        cout << "Les vecteurs ont les mêmes composantes." << endl;
    } else {
        cout << "Les vecteurs n'ont pas les mêmes composantes." << endl;
    }

    float norme_v1 = v1.norme();
    cout << "Norme du vecteur 1 : " << norme_v1 << endl;

    Vecteur3D& vecteurMax = Vecteur3D::normax(v1, v2);
    cout << "Vecteur avec la plus grande norme : ";
    vecteurMax.afficher();

    return 0;
}
