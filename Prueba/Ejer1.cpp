#include <iostream>

using namespace std;

int main() {
    
    double Peso, Altura, BMI;

   
    cout << "Ingrese su Peso en kilogramos: ";
    cin >> Peso;
    cout << "Ingrese su Altura en metros: ";
    cin >> Altura;

    BMI = Peso / (Altura * Altura);

   
    cout << "\nSu BMI es: " << BMI << endl;

 
    if (BMI < 18.5) {
        cout << "Clasificacion: Bajo Peso" << endl;
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "Clasificacion: Normal" << endl;
    } else if (BMI >= 25 && BMI <= 29.9) {
        cout << "Clasificacion: SobrePeso" << endl;
    } else {
        cout << "Clasificacion: Obeso" << endl;
    }

    return 0;
}
