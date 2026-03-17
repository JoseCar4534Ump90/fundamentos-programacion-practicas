#include <stdio.h>

int main() {
    int horas;
    float pago_hora, salario_base, bono, total;

    printf("Horas trabajadas: ");
    scanf("%d", &horas);
    printf("Pago por hora (Bs.): ");
    scanf("%f", &pago_hora);

    salario_base = horas * pago_hora;

    if (horas > 40) {
        bono = salario_base * 0.10;
    } else {
        bono = 0;
    }

    total = salario_base + bono;

    printf("Salario total: Bs. %.2f\n", total);

    return 0;
}
