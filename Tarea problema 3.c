#include <stdio.h>

int main() {
    float n1, n2, n3, promedio;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);

    promedio = (n1 + n2 + n3) / 3;

    printf("Promedio: %.2f\n", promedio);

    return 0;
}
