#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: "; cin >> n;
    if (n <= 1) {
        cout << n << " NO es primo." << endl;
        return 0;
    }
    bool esPrimo = true;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            esPrimo = false;
            break;
        }
    }
    if (esPrimo) cout << n << " ES primo." << endl;
    else cout << n << " NO es primo." << endl;
    return 0;
}