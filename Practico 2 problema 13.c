#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2, pr, pi;

    printf("Coeficientes a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0) {
        printf("Ecuacion degenerada (sin solucion o identidad)\n");
    } else if (a == 0) {
        x1 = -c / b;
        printf("Ecuacion lineal. Solucion: X = %.2f\n", x1);
    } else {
        d = b*b - 4*a*c;

        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            printf("Dos raices reales: X1 = %.2f, X2 = %.2f\n", x1, x2);
        } else if (d == 0) {
            x1 = -b / (2*a);
            printf("Raiz real doble: X = %.2f\n", x1);
        } else {
            pr = -b / (2*a);
            pi = sqrt(-d) / (2*a);
            printf("Raices complejas: %.2f + %.2fi y %.2f - %.2fi\n", pr, pi, pr, pi);
        }
    }

    return 0;
}
