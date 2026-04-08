#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) { int t = b; b = a % b; a = t; }
    return a;
}

int main() {
    int a, b;
    cout << "Ingrese dos enteros: "; cin >> a >> b;
    // División primero para evitar desbordamiento en a*b
    long long mcm = (long long)a / mcd(a, b) * b;
    cout << "MCM = " << mcm << endl;
    return 0;
}