#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, x1, x2;
    printf("Coeficientes a, b, c: "); scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("Dos soluciones: X1 = %.2f, X2 = %.2f\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2*a);
        printf("Una solucion: X = %.2f\n", x1);
    } else {
        printf("Sin solucion real\n");
    }
    return 0;
}
