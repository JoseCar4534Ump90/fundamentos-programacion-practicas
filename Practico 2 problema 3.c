#include <stdio.h>

int main() {
    float p1, p2, ef, proy, nf;

    printf("Parcial1, Parcial2, Final, Proyecto: ");
    scanf("%f %f %f %f", &p1, &p2, &ef, &proy);

    nf = p1 + p2 + ef + proy;

    printf("Nota final: %.2f\n", nf);
    printf("%s\n", nf >= 51 ? "APROBO" : "REPROBO");

    return 0;
}
