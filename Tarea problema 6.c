#include <stdio.h>

int main() {
    int n1, n2, mayor;

    printf("Ingrese primer número: ");
    scanf("%d", &n1);
    printf("Ingrese segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        mayor = n1;
    } else {
        mayor = n2;
    }

    printf("El número mayor es: %d\n", mayor);

    return 0;
}
