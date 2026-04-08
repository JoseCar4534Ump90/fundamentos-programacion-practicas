#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: "; cin >> n;
    long long fac = 1;
    for (int i = 1; i <= n; ++i) fac *= i; // Si n=0, el bucle no entra y fac=1 (correcto)
    cout << n << "! = " << fac << endl;
    return 0;
}