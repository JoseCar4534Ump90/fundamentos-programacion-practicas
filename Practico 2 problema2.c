#include <stdio.h>
#define PI 3.1416
int main() {
    float r, h, al, at, v;
    printf("Radio y Altura: "); scanf("%f %f", &r, &h);
    al = 2 * PI * r * h;
    at = 2 * PI * r * (r + h);
    v = PI * r * r * h;
    printf("AL: %.2f, AT: %.2f, V: %.2f\n", al, at, v);
    return 0;
}
