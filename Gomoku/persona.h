#include <iostream>
#include <string.h>

using namespace std;

class Jugador {	
private:
	string nombre;
	char marca;

public:
	Jugador(string nombre, char marca){
		this->nombre=nombre;
		this->marca=marca;
	}
	
	char ponerMarca(){
		return marca;
	}
	
	string darNombre(){
		return nombre;
	}
	
};
