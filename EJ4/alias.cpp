#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

typedef struct Estudiante Estudiante;
Estudiante copiarEstudiante(const Estudiante *original) {
    Estudiante copia;
    strcpy(copia.nombre, original->nombre);
    copia.edad = original->edad;
    copia.promedio = original->promedio;

    return copia;
}

int main(){

    struct Estudiante estudianteDirecto = {"Juan", 20, 85.5};
    Estudiante estudianteOriginal = {"Juan", 20, 85.5};

    printf("Datos originales:\n");
    printf("Nombre: %s\n", estudianteOriginal.nombre);
    printf("Edad: %d\n", estudianteOriginal.edad);
    printf("Promedio: %.2f\n", estudianteOriginal.promedio);

    Estudiante estudianteCopia = estudianteOriginal;

    



    return 0;
}