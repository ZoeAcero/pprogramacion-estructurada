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

int main(){

    struct Estudiante estudianteOriginal = {"Juan", 20, 85.5};
    struct Estudiante estudianteCopia = copiarEstudiante(&estudianteOriginal);

    printf("Datos originales:\n");
    printf("Nombre: %s\n", estudianteOriginal.nombre);
    printf("Edad: %d\n", estudianteOriginal.edad);
    printf("Promedio: %.2f\n", estudianteOriginal.promedio);

    printf("\nDatos copiados:\n");
    printf("Nombre: %s\n", estudianteCopia.nombre);
    printf("Edad: %d\n", estudianteCopia.edad);
    printf("Promedio: %.2f\n", estudianteCopia.promedio);


    return 0;
}
