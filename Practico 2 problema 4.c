#include <stdio.h>
int main() {
    char nombre[50]; float s, ag; int m;
    printf("Nombre, Salario, Meses: "); scanf("%s %f %d", nombre, &s, &m);
    if (m >= 3) { ag = (s * m) / 12.0; printf("Aguinaldo: Bs. %.2f\n", ag); }
    else { printf("No califica (min 3 meses)\n"); }
    return 0;
}
