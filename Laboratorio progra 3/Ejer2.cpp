#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DiasSemana {
private:
    vector<string> dias;

public:
    DiasSemana() {
        dias = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    }

    void mostrarDias() {
        cout << "Dias de la semana:" << endl;
        for (size_t i = 0; i < dias.size(); i++) {
            cout << i + 1 << ". " << dias[i] << endl;
        }
    }

    void obtenerPosicion(string dia) {
        auto it = find(dias.begin(), dias.end(), dia);
        if (it != dias.end()) {
            cout << "El dia " << dia << " esta en la posicion " << (it - dias.begin() + 1) << "." << endl;
        } else {
            cout << "El dia ingresado no es valido." << endl;
        }
    }
};

int main() {
    DiasSemana semana;
    int opcion;
    string dia;

    do {
        cout << "\n1. Mostrar todos los Dias\n2. Obtener posicion de un dia\n3. Salir\nIngrese una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1:
            semana.mostrarDias();
            break;
        case 2:
            cout << "Ingrese el nombre del dia (con la primera letra en mayuscula): ";
            getline(cin, dia);
            semana.obtenerPosicion(dia);
            break;
        case 3:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "opcion no valida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
