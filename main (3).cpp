#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: "; cin >> n;
    long long suma = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) suma -= i;
        else suma += i;
    }
    cout << "S = " << suma << endl;
    return 0;
}