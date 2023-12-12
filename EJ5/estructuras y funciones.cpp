#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void imprimirEstudiantePorValor(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

void imprimirEstudiantePorReferencia(const struct Estudiante *estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
}

void imprimirEstudiantePorDireccion(const struct Estudiante *estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
}

int main(){

    struct Estudiante estudiante = {"Juan", 20, 85.5};
    imprimirEstudiantePorValor(estudiante);
    imprimirEstudiantePorReferencia(&estudiante);
    imprimirEstudiantePorDireccion(&estudiante);

    return 0;

}

