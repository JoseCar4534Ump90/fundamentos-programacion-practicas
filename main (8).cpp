#include <iostream>
using namespace std;

int main() {
    double x; int n;
    cout << "Ingrese x: "; cin >> x;
    cout << "Ingrese n (debe ser impar): "; cin >> n;
    
    double suma = x, termino = x, signo = -1.0; // Primer término i=1
    for (int i = 3; i <= n; i += 2) {
        termino *= (x * x) / (i * (i - 1)); // Actualiza de x^(i-2)/(i-2)! a x^i/i!
        suma += signo * termino;
        signo *= -1.0;
    }
    cout << "S = " << suma << endl;
    return 0;
}