#include <stdio.h>
int main() {
    int pin, monto, saldo;
    printf("Insertando tarjeta...\n");
    printf("Ingrese PIN: "); scanf("%d", &pin);
    printf("Ingrese monto a retirar: "); scanf("%d", &monto);
    printf("Verificando saldo...\n");
    printf("Entregando %d Bs...\n", monto);
    printf("Tome su dinero y tarjeta\n");
    return 0;
}
