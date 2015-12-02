#include "juego.cpp"

using namespace std;

void SelecTamanio(){
	int SelecTamanio;
	int CantPiezas;
	cout<<"\n"<<endl;
	cout<<""<<endl;
	cout<<"\t 1. Pequeño (Máximo 5 piezas)."<<endl;
	cout<<"\t 2. Mediano (Máximo 10 piezas)."<<endl;
	cout<<"\t 3. Grande (Máximo 15 piezas)."<<endl;
	cout<<"\t 4. Clásico."<<endl;
	cout<<""<<endl;
	cout<<"\t Seleccione el Tamaño del Tablero: ";
	cin>>SelecTamanio;
	cout<<"\t Cantidad de Piezas para Ganar: ";
	cin>>CantPiezas;
	system("cls");
	
	if (SelecTamanio==1){
		Juego(5,CantPiezas);
	}
	
	if (SelecTamanio==2){
		Juego(10,CantPiezas);
	}
	
	if (SelecTamanio==3){
		Juego(15,CantPiezas);
	}
	
	if (SelecTamanio==4){
		Juego(19,5);
	}
}
