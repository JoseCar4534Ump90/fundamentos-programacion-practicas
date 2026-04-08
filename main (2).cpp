#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: "; cin >> n;
    long long suma = 0;
    for (int i = 1; i <= n; ++i) suma += i * i;
    cout << "S (cuadrados) = " << suma << endl;
    return 0;
}