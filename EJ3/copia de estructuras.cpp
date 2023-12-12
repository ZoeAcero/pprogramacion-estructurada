#include <iostream>
#include <cstring>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Estudiante copiarEstudiante(const struct Estudiante *original) {
    struct Estudiante copia;
    strcpy(copia.nombre, original->nombre);
    copia.edad = original->edad;
    copia.promedio = original->promedio;
    return copia;
}
