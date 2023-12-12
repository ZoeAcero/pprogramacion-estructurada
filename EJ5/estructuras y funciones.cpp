#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;

    void imprimirInformacion() {

    }
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

class Estudiante {
public:

   (std::string nombre, int edad, float promedio)
            : nombre(nombre), edad(edad), promedio(promedio) {}


    void imprimirInformacion() const {
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Edad: " << edad << "\n";
        std::cout << "Promedio: " << promedio << "\n";
    }

private:
    std::string nombre;
    int edad;
    float promedio;
};

int main(){

    struct Estudiante estudiante = {"Juan", 20, 85.5};
    imprimirEstudiantePorValor(estudiante);
    imprimirEstudiantePorReferencia(&estudiante);
    imprimirEstudiantePorDireccion(&estudiante);

    estudiante.imprimirInformacion();


    return 0;

}

