// Clases en C++ POO

/*NOTAS:
- Normalmente se nombra en singular y primer letra mayuscula
- Casi siempre los atributos (caracteristicas) se encapsulan
- Los unicos que pueden jugar con los atributos privados son las funciones dentro de la clase
- El metodo constructor nos ayuda a inicalizar los atributos y suelen tener el misno nombre de la clase
*/

#include <iostream>
#include<stdlib.h>

using namespace std;

class Persona {
	private: //Atributos
		int edad;
		string nombre;
		
	public: // Metodos
		Persona(int, string); // Constructor
		void leer();
		void correr(); //funciones donde se mandaran a llamar los datos edad y nombre

};

// Constructor, nos sirve para inicializar los atributos de la clase
Persona::Persona(int _edad, string _nombre) {
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer() {
	cout << "Soy " << nombre << " y estoy leyendo un libro" << endl;
}

void Persona::correr() {
	cout << "Soy " << nombre << " y estoy corriendo y tengo "<<edad<< " anios" << endl;	
}

int main() {
	Persona p1 = Persona(18, "Samantha");


	system("PAUSE");
	return 0;
}
