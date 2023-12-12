#include <stdio.h>
#include <iostream>

using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void ingresarDatos(struct Estudiante *estudiante) {
    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", estudiante->nombre);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante->edad);

    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &estudiante->promedio);
}

void mostrarInformacion(const struct Estudiante *estudiante) {
    printf("\nInformación del estudiante:\n");
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
}

float calcularPromedioGeneral(const struct Estudiante estudiantes[], int numEstudiantes) {
    float suma = 0.0;

    for (int i = 0; i < numEstudiantes; ++i) {
        suma += estudiantes[i].promedio;
    }

    return (numEstudiantes > 0) ? suma / numEstudiantes : 0.0;
}