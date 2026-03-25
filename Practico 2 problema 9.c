#include <stdio.h>
int main() {
    int m, d, h, mr;
    printf("Minutos: "); scanf("%d", &m);
    d = m / 1440; mr = m % 1440; h = mr / 60; mr = mr % 60;
    printf("%d dias, %d horas, %d minutos\n", d, h, mr);
    return 0;
}
