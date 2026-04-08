#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: "; cin >> n;
    long long suma = 0;
    for (int i = 1; i <= n; i += 2) suma += i;
    cout << "S (impares) = " << suma << endl;
    return 0;
}