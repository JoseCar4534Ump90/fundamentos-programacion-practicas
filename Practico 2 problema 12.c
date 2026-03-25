#include <stdio.h>

int main() {
    int d, m, a;
    char *estacion;

    printf("Dia, Mes, Año: ");
    scanf("%d %d %d", &d, &m, &a);

    if ((m == 3 && d >= 21) || (m > 3 && m < 6))
        estacion = "Otoño";
    else if ((m == 6 && d >= 21) || (m > 6 && m < 9))
        estacion = "Invierno";
    else if ((m == 9 && d >= 21) || (m > 9 && m < 12))
        estacion = "Primavera";
    else
        estacion = "Verano";

    printf("Estacion: %s\n", estacion);

    return 0;
}
