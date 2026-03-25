#include <stdio.h>
int main() {
    float a, b, c, d, e, f, det, x, y;
    printf("A, B, C: "); scanf("%f %f %f", &a, &b, &c);
    printf("D, E, F: "); scanf("%f %f %f", &d, &e, &f);
    det = a*e - b*d;
    if (det != 0) {
        x = (c*e - b*f) / det; y = (a*f - c*d) / det;
        printf("X = %.2f, Y = %.2f\n", x, y);
    } else { printf("Sin solucion unica\n"); }
    return 0;
}
