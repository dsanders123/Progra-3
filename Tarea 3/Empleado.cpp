#include <iostream>
#include <string>

using namespace std;

class Empleado {
	
protected:
    string nombre;
public:
    Empleado(string _nombre) : nombre(_nombre) {}

    void setNombre(string _nombre) { nombre = _nombre; }
    string getNombre() { return nombre; }

    virtual string toString() {
        return "Nombre de empleado: " + nombre;
    }
};



class Operario : public Empleado {
public:
    Operario(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Operario: " + nombre;
    }
};



class Directivo : public Empleado {
public:
    Directivo(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Directivo: " + nombre;
    }
};



class Oficial : public Empleado {
public:
    Oficial(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Oficial: " + nombre;
    }
};



class Tecnico : public Empleado {
public:
    Tecnico(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Tecnico: " + nombre;
    }
};



int main() {
    Operario empleado1("Bryson Tiller");
    
    Directivo empleado2("Chris Brown");
    
    Oficial empleado3("Tory Lanez");
    
    Tecnico empleado4("King");
    

    cout << empleado1.toString() << endl;
    
    cout << empleado2.toString() << endl;
    
    cout << empleado3.toString() << endl;
    
    cout << empleado4.toString() << endl;



    return 0;
}