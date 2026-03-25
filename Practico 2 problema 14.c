#include <stdio.h>

int main() {
    int cp, cc, eq, cr, ca;
    float tp, tc, teq, tr, ta, total;

    printf("=== MENU DE SALTEÑERIA ===\n");
    printf("Cantidad salteñas de pollo (Bs 3.50): "); scanf("%d", &cp);
    printf("Cantidad salteñas de carne (Bs 4.00): "); scanf("%d", &cc);
    printf("Cantidad empanadas de queso (Bs 3.00): "); scanf("%d", &eq);
    printf("Cantidad refrescos 500ml (Bs 5.00): "); scanf("%d", &cr);
    printf("Cantidad aguas minerales (Bs 3.00): "); scanf("%d", &ca);

    tp = cp * 3.50;
    tc = cc * 4.00;
    teq = eq * 3.00;
    tr = cr * 5.00;
    ta = ca * 3.00;
    total = tp + tc + teq + tr + ta;

    printf("\n=== TOTAL PARCIAL ===\n");
    printf("Salteñas pollo: Bs. %.2f\n", tp);
    printf("Salteñas carne: Bs. %.2f\n", tc);
    printf("Empanadas queso: Bs. %.2f\n", teq);
    printf("Refrescos: Bs. %.2f\n", tr);
    printf("Aguas minerales: Bs. %.2f\n", ta);
    printf("=== TOTAL A PAGAR: Bs. %.2f ===\n", total);

    return 0;
}
