#include <iostream>
using namespace std;

int main() {
    double x; int n;
    cout << "Ingrese x: "; cin >> x;
    cout << "Ingrese n: "; cin >> n;
    double suma = 0.0, termino = 1.0, signo = 1.0;
    for (int i = 1; i <= n; ++i) {
        termino *= x / i;
        suma += signo * termino;
        signo *= -1.0;
    }
    cout << "S = " << suma << endl;
    return 0;
}