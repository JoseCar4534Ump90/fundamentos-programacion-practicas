#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El número es: Par\n");
    } else {
        printf("El número es: Impar\n");
    }

    return 0;
}
