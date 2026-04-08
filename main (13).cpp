#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int h = 0, m = 0, s = 0;
    cout << "Reloj digital (Ctrl+C para detener):\n";
    while (true) {
        cout << "\r" << setfill('0') << setw(2) << h << ":"
             << setw(2) << m << ":" << setw(2) << s << flush;
        this_thread::sleep_for(chrono::seconds(1));
        s++;
        if (s == 60) { s = 0; m++; }
        if (m == 60) { m = 0; h++; }
        if (h == 24) h = 0;
    }
    return 0;
}