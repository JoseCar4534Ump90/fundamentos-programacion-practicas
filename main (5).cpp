#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; int n;
    cout << "Ingrese x: "; cin >> x;
    cout << "Ingrese n: "; cin >> n;
    double suma = 0.0;
    for (int i = 1; i <= n; ++i) suma += pow(x, i);
    cout << "S = " << suma << endl;
    return 0;
}