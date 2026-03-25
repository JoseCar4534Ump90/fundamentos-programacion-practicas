#include <stdio.h>

int main() {
    float consumo, tarifa, total;
    char *categoria;

    printf("Consumo mensual en kWh: ");
    scanf("%f", &consumo);

    if (consumo == 0) {
        printf("NO CONSUMO REGISTRADO\n");
    } else {
        if (consumo <= 100) {
            tarifa = 0.30;
            categoria = "Basica";
        } else if (consumo <= 300) {
            tarifa = 0.50;
            categoria = "Media";
        } else if (consumo <= 600) {
            tarifa = 0.75;
            categoria = "Alta";
        } else {
            tarifa = 1.10;
            categoria = "Industrial";
        }

        total = consumo * tarifa + 8.00;

        printf("Categoria: %s\n", categoria);
        printf("Tarifa: Bs. %.2f/kWh\n", tarifa);
        printf("Consumo: %.2f kWh\n", consumo);
        printf("Cargo fijo: Bs. 8.00\n");
        printf("TOTAL A PAGAR: Bs. %.2f\n", total);
    }

    return 0;
}
