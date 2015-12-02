#include <iostream>
#include "persona.h"

using namespace std;

class Tablero {	
private:
	char **tablero;
	int tamanio;
	int piezas;
	
public:
	Jugador *actualJugador;
	Tablero(int n, Jugador *siguienteJugador,int p){
		tamanio=n;
		piezas=p;
		tablero=new char *[tamanio];
		for( int i = 0 ; i < tamanio ; i++ )
			tablero[i]= new char[tamanio];
		for(int i=0;i<tamanio;i++)
			for(int k=0;k<tamanio;k++)
				tablero[i][k]='_';
		actualJugador=siguienteJugador;
	}
	
	void imprimirTablero(){
		cout<<"\n \n";
		cout<<"\t";
		for(int i=0;i<tamanio;i++)
			cout<<i+1<<"\t";
		cout<<"\n";
		for(int i=0;i<tamanio;i++){
			cout<<i+1<<"\n \t";
			for(int k=0;k<tamanio;k++){
				cout<<tablero[i][k]<<"\t";
			}
			cout<<"\n \n";
		}
	}
	
	bool verificarPosicion(int fila, int col){
		if(fila>=tamanio || fila<0 || col>=tamanio || col <0){
			return false;
		}
		if(tablero[fila][col]=='_'){
			return true;
		}else{
			return false;
		}
	}
	
	bool actualizarTablero(int r, int c){
		if(verificarPosicion(r,c)){
			tablero[r][c]=actualJugador->ponerMarca();
		}else{
			return false;
		}
		return true;
	}
	
	
	bool verficarGanador(){
		int jugadorMarcas, r, c, x,y;
		for (r = 0; r < tamanio; r++){
			jugadorMarcas = 0;
			for (c = 0; c < tamanio; c++){
				if (tablero[r][c] == '_'){
					jugadorMarcas = 0;
				}
				if (tablero[r][c] == actualJugador->ponerMarca()){
					jugadorMarcas += 1;
				}
				if(jugadorMarcas>=piezas){
					return true;
				}
			}
		}
		
		for(c=0;c<tamanio;c++)
		{
			jugadorMarcas = 0;
			for (r = 0; r < tamanio; r++)
			{
				if (tablero[r][c] == '_')
					jugadorMarcas = 0;
				if (tablero[r][c] == actualJugador->ponerMarca())
					jugadorMarcas += 1;
				if(jugadorMarcas>=piezas)
					return true;
			}
			
		}
		
		for(x=tamanio,y=0;x>0;x--,y++)
		{
			jugadorMarcas=0;
			for(r=y,c=0;c<x;r++,c++)
			{
				if (tablero[r][c] == '_')
					jugadorMarcas = 0;
				if (tablero[r][c] == actualJugador->ponerMarca())
					jugadorMarcas += 1;
				if(jugadorMarcas>=piezas)
					return true;
			}
		}

		for(x=tamanio,y=0;x>0;x--,y++)
		{
			jugadorMarcas=0;
			for(r=0,c=y;c<x;r++,c++)
			{
				if (tablero[r][c] == '_')
					jugadorMarcas = 0;
				if (tablero[r][c] == actualJugador->ponerMarca())
					jugadorMarcas += 1;
				if(jugadorMarcas>=piezas)
					return true;
			}
		}
		return false;
	}
};
