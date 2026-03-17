#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Base del triángulo: ");
    scanf("%f", &base);
    printf("Altura del triángulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Área: %.2f\n", area);

    return 0;
}
