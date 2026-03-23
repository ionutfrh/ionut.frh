#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Rezolvarea ecuatiei de gradul 2: ax^2 + bx + c = 0" << endl;
    cout << "Introdu coeficientul a: ";
    cin >> a;

    if (a == 0) {
        cout << "Coeficientul 'a' nu poate fi 0 (nu mai e ecuatie de gradul 2)." << endl;
        return 1;
    }

    cout << "Introdu coeficientul b: ";
    cin >> b;
    cout << "Introdu coeficientul c: ";
    cin >> c;

    double delta = b * b - 4 * a * c;

    cout << "\nEcuatia: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    cout << "Delta = " << delta << endl;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Delta > 0 => doua radacini reale distincte:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Delta = 0 => o radacina reala dubla:" << endl;
        cout << "x1 = x2 = " << x << endl;
    } else {
        double parteReala = -b / (2 * a);
        double parteImaginara = sqrt(-delta) / (2 * a);
        cout << "Delta < 0 => doua radacini complexe conjugate:" << endl;
        cout << "x1 = " << parteReala << " + " << parteImaginara << "i" << endl;
        cout << "x2 = " << parteReala << " - " << parteImaginara << "i" << endl;
    }

    return 0;
}
