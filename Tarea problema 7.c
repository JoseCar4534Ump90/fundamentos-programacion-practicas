#include <stdio.h>

int main() {
    float nota;

    printf("Ingrese nota final: ");
    scanf("%f", &nota);

    if (nota >= 51) {
        printf("Resultado: Aprobado\n");
    } else {
        printf("Resultado: Reprobado\n");
    }

    return 0;
}
