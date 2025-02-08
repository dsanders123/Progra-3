#include <iostream>
#include <string>

using namespace std;


class Vehiculo {
protected:
    string placa;
    string propietario;

public:
    Vehiculo(string p, string prop) : placa(p), propietario(prop) {}

    void arrancar() {
        cout << "El vehiculo con placa " << placa << " esta arrancando.\n";
    }

    void detener() {
        cout << "El vehiculo con placa " << placa << " se ha detenido.\n";
    }
};

class Taxi : public Vehiculo {
private:
    string empresa;

public:
    Taxi(string p, string prop, string emp) : Vehiculo(p, prop), empresa(emp) {}

    void mostrarInfo() {
        cout << "Taxi de la empresa " << empresa << " con placa " << placa << ".\n";
    }
};

class Autobus : public Vehiculo {
private:
    int capacidadPasajeros;

public:
    Autobus(string p, string prop, int cap) : Vehiculo(p, prop), capacidadPasajeros(cap) {}

    void mostrarInfo() {
        cout << "Autobus con capacidad de " << capacidadPasajeros << " pasajeros, placa " << placa << ".\n";
    }
};


class Usuario {
protected:
    string nombre;
    string email;
    string Contra;

public:
    Usuario(string n, string e, string p) : nombre(n), email(e), Contra(p) {}

    virtual void mostrarInfo() {
        cout << "Usuario: " << nombre << ", Email: " << email << "\n";
    }
};


class Administrador : public Usuario {
public:
    Administrador(string n, string e, string p) : Usuario(n, e, p) {}

    void gestionarSistema() {
        cout << "Administrador " << nombre << " esta gestionando el sistema.\n";
    }
};

class Cliente : public Usuario {
	public:
    Cliente(string n, string e, string p) : Usuario(n, e, p) {}

    void realizarCompra() {
        cout << "Cliente " << nombre << " esta realizando una compra.\n";
    }
};

int main() {
   
    Vehiculo v1("HND123", "Delmark Sanders");
    Taxi t1("TX456", "Xiomara Castro", "Taxi Express");
    Autobus a1("BUS789", "Carlos Rivera", 40);

    Usuario* u1 = new Administrador("Messi", "admin@email.com", "1234");
    Usuario* u2 = new Cliente("Boateng", "cliente@email.com", "abcd");

    v1.arrancar();
    v1.detener();

    t1.mostrarInfo();
    a1.mostrarInfo();

    u1->mostrarInfo();
    static_cast<Administrador*>(u1)->gestionarSistema();

    u2->mostrarInfo();
    static_cast<Cliente*>(u2)->realizarCompra();

    delete u1;
    delete u2;

    return 0;
}
