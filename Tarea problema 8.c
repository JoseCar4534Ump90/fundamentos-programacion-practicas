#include <stdio.h>

int main() {
    float monto, descuento, total;

    printf("Monto de compra (Bs.): ");
    scanf("%f", &monto);

    if (monto > 100) {
        descuento = monto * 0.10;
    } else {
        descuento = 0;
    }

    total = monto - descuento;

    printf("Total a pagar: Bs. %.2f\n", total);

    return 0;
}
