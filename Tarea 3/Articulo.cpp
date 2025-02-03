#include <iostream>
#include <string>

using namespace std;



class Articulo {
	
protected:
    string nombre;
    double precio;
    
    
public:
    Articulo(string _nombre, double _precio) : nombre(_nombre), precio(_precio) {}

    string getNombre() { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }

    double getPrecio() { return precio; }

    virtual double getParteIVA() = 0;
};



class Tipo4 : public Articulo {
	
public:
    Tipo4(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() override {
        return precio * 0.04;
    }
};



class Tipo7 : public Articulo {
	
public:
    Tipo7(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() override {
        return precio * 0.07;
    }
};



class Tipo16 : public Articulo {
	
public:
    Tipo16(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() override {
        return precio * 0.16;
    }
};



int main() {
    Tipo4 art1("Monitor", 5000);
    
    
    Tipo7 art2("Mouse", 2000);
    
    
    
    Tipo16 art3("CPU", 3000);
    
    

	   	 cout << "Articulo: " << art1.getNombre() << ", Precio: " << art1.getPrecio() 
	         << ", IVA: " << art1.getParteIVA() << endl;
         
         

   		 cout << "Articulo: " << art2.getNombre() << ", Precio: " << art2.getPrecio() 
         << ", IVA: " << art2.getParteIVA() << endl;
         
         

  		  cout << "Articulo: " << art3.getNombre() << ", Precio: " << art3.getPrecio() 
         << ", IVA: " << art3.getParteIVA() << endl;

    return 0;
}