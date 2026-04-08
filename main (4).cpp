#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: "; cin >> n;
    long long producto = 1;
    for (int i = 1; i <= n; ++i) producto *= i;
    cout << "P = " << producto << " (Nota: se desborda para N > 20 con long long)" << endl;
    return 0;
}