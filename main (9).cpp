#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos enteros: "; cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "MCD = " << a << endl;
    return 0;
}