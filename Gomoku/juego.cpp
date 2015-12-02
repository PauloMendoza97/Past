#include "includes.h"
#include "tablero.h"

using namespace std;

int fila;
int columna;
bool control=true;
bool ganador;

void Juego(int TamanoTablero, int NroPiezas){
	Jugador *humano1=new Jugador("Jugador 1",'X');
	Jugador *humano2=new Jugador("Jugador 2",'O');
	Tablero *tablero=new Tablero(TamanoTablero,humano1,NroPiezas);
	
	do{
		do{
			tablero->imprimirTablero();
			cout<<""<<endl;
			cout<<"\t Turno: " << tablero->actualJugador->darNombre() <<endl;
			cout<<"\t * Ingresa la Fila: ";
			cin>> fila;
			cout<<"\t * Ingresa la columna: ";
			cin>> columna;
			system("cls");
			control=tablero->actualizarTablero(fila-1, columna-1);
		}
		while(!control);  
		ganador=tablero->verficarGanador();
		if(!ganador){
			if(tablero->actualJugador==humano1){
				tablero->actualJugador=humano2;
			}else{
				tablero->actualJugador=humano1;
			}
		}
	}
	
	while(!ganador);
	tablero->imprimirTablero();
	string nombreJugador;
	string otroJugador;
	cout<<""<<endl;
	cout<<"\t El ganador es: "<<tablero->actualJugador->darNombre()<<endl;
	cout<<""<<endl;
	cout<<"\t ¿Cuál es tu nombre?"<<endl;
	cout<<"\t * ";
	cin>>nombreJugador;
	cout<<""<<endl;
	cout<<"\t ¡Felicidades "<<nombreJugador<<"!"<<endl;
	cout<<""<<endl;
}
