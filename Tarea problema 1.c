#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50], carrera[50];
    int edad, semestre;

    printf("Nombre completo: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = 0;

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Carrera: ");
    scanf(" %[^\n]", carrera);

    printf("Semestre: ");
    scanf("%d", &semestre);

    printf("\n---DATOS DEL ESTUDIANTE---\n");
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Carrera: %s\n", carrera);
    printf("Semestre: %d\n", semestre);

    return 0;
}
