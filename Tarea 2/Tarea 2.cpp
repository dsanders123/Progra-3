#include <iostream>
#include <string>
using namespace std;


class Vehiculo {
protected:
    string marca;
    string modelo;
    int anio;

public:
   
    Vehiculo(string _marca, string _modelo, int _anio)
        : marca(_marca), modelo(_modelo), anio(_anio) {}

  
    virtual void mostrarInfo() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", anio: " << anio << endl;
    }


    virtual void arrancar() {
        cout << "El vehículo está arrancando..." << endl;
    }
};


class Coche : public Vehiculo {
private:
    int numPuertas;

public:

    Coche(string _marca, string _modelo, int _anio, int _numPuertas)
        : Vehiculo(_marca, _modelo, _anio), numPuertas(_numPuertas) {}


    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Numero de puertas: " << numPuertas << endl;
    }

 
    void arrancar() override {
        cout << "El coche esta arrancando...¡Vroom Vroom!" << endl;
    }
};


class Moto : public Vehiculo {
private:
    bool tieneCasco;

public:
 
    Moto(string _marca, string _modelo, int _anio, bool _tieneCasco)
        : Vehiculo(_marca, _modelo, _anio), tieneCasco(_tieneCasco) {}


    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Tiene casco: " << (tieneCasco ? "Si" : "No") << endl;
    }


    void arrancar() override {
        cout << "La moto esta arrancando... ¡Brrrm Brrrm!" << endl;
    }
};

class Camion : public Vehiculo {
private:
    float capacidadCarga;

public:

    Camion(string _marca, string _modelo, int _anio, float _capacidadCarga)
        : Vehiculo(_marca, _modelo, _anio), capacidadCarga(_capacidadCarga) {}


    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
    }


    void arrancar() override {
        cout << "El camion esta arrancando... ¡Rugido del motor!" << endl;
    }
};


int main() {

    Coche miCoche("Toyota", "Corolla", 2022, 4);
    cout << "Coche:" << endl;
    miCoche.mostrarInfo();
    miCoche.arrancar();

  
    Moto miMoto("Yamaha", "YZF-R3", 2021, true);
    cout << "\nMoto:" << endl;
    miMoto.mostrarInfo();
    miMoto.arrancar();


    Camion miCamion("Volvo", "FH16", 2020, 20.5);
    cout << "\nCamion:" << endl;
    miCamion.mostrarInfo();
    miCamion.arrancar();

    return 0;
}