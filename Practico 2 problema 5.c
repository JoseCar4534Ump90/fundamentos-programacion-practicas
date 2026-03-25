#include <stdio.h>
#include <math.h>
int main() {
    float c, t, cuota, monto, interes; int n;
    printf("Capital, Tasa, Cuotas: "); scanf("%f %f %d", &c, &t, &n);
    t = t / 100;
    cuota = c * (t * pow(1 + t, n)) / (pow(1 + t, n) - 1);
    monto = cuota * n; interes = monto - c;
    printf("Cuota: %.2f, Total: %.2f, Interes: %.2f\n", cuota, monto, interes);
    return 0;
}
