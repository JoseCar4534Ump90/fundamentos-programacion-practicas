#include <stdio.h>

int main() {
    int cantidad;
    float total;
    const float PRECIO = 12;

    printf("Cantidad de cuadernos: ");
    scanf("%d", &cantidad);

    total = cantidad * PRECIO;

    printf("Total a pagar: Bs. %.2f\n", total);

    return 0;
}
