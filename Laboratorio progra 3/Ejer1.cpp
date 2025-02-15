#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Alumno {
public:
    string nombre;
    float nota;

    Alumno(string nombre, float nota) {
        this->nombre = nombre;
        this->nota = nota;
    }
};

class GestionAlumnos {
private:
    vector<Alumno> alumnos;

public:
    void agregarAlumno(string nombre, float nota) {
        alumnos.push_back(Alumno(nombre, nota));
    }

    void mostrarLista() {
        if (alumnos.empty()) {
            cout << "No hay alumnos en esta lista" << endl;
            return;
        }
        cout << "Lista de los alumnos:" << endl;
        for (const auto& alumno : alumnos) {
            cout << "Nombre: " << alumno.nombre << ", Nota: " << alumno.nota << endl;
        }
    }

    void mostrarPromedio() {
        if (alumnos.empty()) {
            cout << "No hay alumnos para que se les sea calculado el promedio." << endl;
            return;
        }
        float suma = 0;
        for (const auto& alumno : alumnos) {
            suma += alumno.nota;
        }
        cout << "Promedio de las notas: " << suma / alumnos.size() << endl;
    }

    void mostrarNotaMenor() {
        if (alumnos.empty()) {
            cout << "No hay alumnos en esta lista" << endl;
            return;
        }
        Alumno menor = alumnos[0];
        for (const auto& alumno : alumnos) {
            if (alumno.nota < menor.nota) {
                menor = alumno;
            }
        }
        cout << "Alumno con la nota menor: " << menor.nombre << " - Nota: " << menor.nota << endl;
    }

    void mostrarNotaMayor() {
        if (alumnos.empty()) {
            cout << "No hay alumnos en esta lista" << endl;
            return;
        }
        Alumno mayor = alumnos[0];
        for (const auto& alumno : alumnos) {
            if (alumno.nota > mayor.nota) {
                mayor = alumno;
            }
        }
        cout << "Alumno con la nota mayor: " << mayor.nombre << " - Nota: " << mayor.nota << endl;
    }

    void vaciarLista() {
        alumnos.clear();
        cout << "La lista de alumnos a sido vaciada" << endl;
    }
};

int main() {
    GestionAlumnos gestion;
    int opcion;
    string nombre;
    float nota;

    do {
        cout << "\n1. Agregar Alumno\n2. Mostrar Lista\n3. Mostrar Promedio\n4. Mostrar Nota Menor\n5. Mostrar Nota Mayor\n6. Vaciar Lista\n7. Salir\nIngrese una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1:
            cout << "Ingrese nombre del alumno: ";
            getline(cin, nombre);
            cout << "Ingrese nota del alumno: ";
            cin >> nota;
            gestion.agregarAlumno(nombre, nota);
            break;
        case 2:
            gestion.mostrarLista();
            break;
        case 3:
            gestion.mostrarPromedio();
            break;
        case 4:
            gestion.mostrarNotaMenor();
            break;
        case 5:
            gestion.mostrarNotaMayor();
            break;
        case 6:
            gestion.vaciarLista();
            break;
        case 7:
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
        }
    } while (opcion != 7);

    return 0;
}
