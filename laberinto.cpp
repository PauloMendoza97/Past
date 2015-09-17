#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#define FIL 20
#define COL 50

using namespace std;

int destinox, puntox, puntoy;
char lab[FIL][COL];
void Menu();
void Inicializar();
void Imprimir();
void GenerarCamino(int i, int j);
void GenerarParedes();
void FinGenerar();
void Jugar(int tecla);
using namespace std;

int main(int argc, char** argv){
	cout<<""<<endl;
	cout<<",       .                 .     "<<endl;
	cout<<")   ,-. |-. ,-. ,-. . ,-. |- ,-."<<endl;
	cout<<"/   ,-| | | |-' |   | | | |  | | "<<endl;
	cout<<"`--'`-^ ^-' `-' '   ' ' ' `' `-'"<<endl;
	srand(unsigned(time(NULL)));
	Menu();
	int x=1+rand()%FIL-2;
	GenerarCamino(x, 1);
	lab[x][1]='I';
	GenerarParedes();
	FinGenerar();
	Imprimir();
	int tecla;
	puntox=x;
	puntoy=1;
	while(true){
		tecla=getch();
		if(tecla==27){
			break;
		}
		else{
			Jugar(tecla);
			if(lab[puntox][puntoy+1]=='F'){
				cout<<""<<endl;
				cout<<"GANASTE!"<<endl;
				break;
			}
		}
	}
	int menu;
		cout<<"Presiona 1 para regresar al Menu Principal: ";
		cin>>menu;
		system("cls");
		if (menu==1)
		{
			Menu();
		}
}

void Menu(){
	int selec;
	cout<<""<<endl;
	cout<<"1. Jugar"<<endl;
	cout<<"2. Instrucciones"<<endl;
	cout<<"3. Creditos"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<""<<endl;
	cout<<"Seleccione una opcion: ";
	cin>>selec;
	system("cls");
	if (selec==1)
	{
		Inicializar();
	}
	if (selec==2)
	{
		cout<<""<<endl;
		cout<<",-_/         .                                   "<<endl;
		cout<<"'  | ,-. ,-. |- ,-. . . ,-. ,-. . ,-. ,-. ,-. ,-."<<endl;
		cout<<".^ | | | `-. |  |   | | |   |   | | | | | |-' `-."<<endl;
		cout<<"`--' ' ' `-' `' '   `-^ `-' `-' ' `-' ' ' `-' `-'"<<endl;
		cout<<""<<endl;
		cout<<"Usa las Teclas Direccionales (Arriba, Abajo, Izquierda y Derecha) para moverte por el tablero."<<endl;
		cout<<"Objetivo: De Inicio (I) debes llegar al Final (F)."<<endl;
		cout<<""<<endl;
		int menu;
		cout<<"Presiona 1 para regresar al Menu Principal: ";
		cin>>menu;
		system("cls");
		if (menu==1)
		{
			Menu();
		}
	}
	if (selec==3)
	{
		cout<<""<<endl;
		cout<<",--.           .   .          "<<endl;
		cout<<"| `-' ,-. ,-. ,-| . |- ,-. ,-."<<endl;
		cout<<"|   . |   |-' | | | |  | | `-."<<endl;
		cout<<"`--'  '   `-' `-^ ' `' `-' `-'"<<endl;
		cout<<""<<endl;
		cout<<"Juego desarrollado por:"<<endl;
		cout<<"* Rodrigo Jesus Ali Guevara."<<endl;
		cout<<"* Giancarlo Andre Anco Valdivia."<<endl;
		cout<<"* Fabrizio Rodrigo Flores Pari."<<endl;
		cout<<""<<endl;
		int menu;
		cout<<"Presiona 1 para regresar al Menu Principal: ";
		cin>>menu;
		system("cls");
		if (menu==1)
		{
			Menu();
		}
	}
	if (selec==4)
	{
		exit(0);
	}
}

void Inicializar(){
	for(int i=0; i<FIL; i++){
		for(int j=0; j<COL; j++){
			if(i==0 || j==0 || i==FIL-1 || j==COL-1){
				lab[i][j]='P';
			}
			else{
				lab[i][j]=' ';
			}
		}
	}
}

void Imprimir(){
	for(int i=0; i<FIL; i++){
		for(int j=0; j<COL; j++){
			if(lab[i][j]=='0' || lab[i][j]=='P'){
				cout<<(char)177;
			}
			else{
				cout<<lab[i][j];
			}
		}
		cout<<endl;
	}
}

void GenerarCamino(int i, int j){
	while(j!=COL-2){
		int a=rand()%3;
		switch(a){
		case 0:
			if(i+1!=FIL-1 && lab[i+1][j]!='O'){
				i++;
				lab[i][j]='O';
			}
			break;
		case 1:
			if(i-1!=0 && lab[i-1][j]!='O'){
				i--;
				lab[i][j]='O';
			}
			break;
		case 2:
			if(j+1!=COL-1 && lab[i][j+1]!='O'){
				j++;
				lab[i][j]='O';
				if(j==COL-2) lab[i][j]='F';
			}
			break;
		}
	}
	destinox=i;
}

void GenerarParedes(){
	int paredes=0;
	while(paredes<100){
		int x=rand()%FIL;
		int y=rand()%COL;
		if(lab[x][y]==' '){
			paredes++;
			int lim=1+rand()%10;
			int puestas=0;
			switch(rand()%4){
			case 0:
				while(lab[x][y]==' '){
					if(puestas==lim){
						break;
					}
					puestas++;
					lab[x][y]='P';
					x--;
				}
				break;

			case 1:
				while(lab[x][y]==' '){
					if(puestas==lim){
						break;
					}
					puestas++;
					lab[x][y]='P';
					x++;
				}
				break;

			case 2:
				while(lab[x][y]==' '){
					if(puestas==lim){
						break;
					}
					puestas++;
					lab[x][y]='P';
					y--;
				}
				break;

			case 3:
				while(lab[x][y]==' '){
					if(puestas==lim){
						break;
					}
					puestas++;
					lab[x][y]='P';
					y++;
				}
				break;
			}
		}
	}
}

void FinGenerar(){
	for(int i=0; i<FIL; i++){
		for(int j=0; j<COL-1; j++){
			if(lab[i][j]=='O'){
				lab[i][j]=' ';
			}
			if(j==COL-2 && lab[i][j]!='F'){
				lab[i][j]='P';
			}
			if(lab[i][j]=='F'){
				lab[i][j+1]='F';
				lab[i][j]=' ';
			}
		}
	}
	}

void Jugar(int tecla){
	switch(tecla){
	case 72:
		if(lab[puntox-1][puntoy]==' '){
		system("cls");
		lab[puntox-1][puntoy]='.';
		puntox--;
		Imprimir();
		}
		else if(lab[puntox-1][puntoy]=='.' || lab[puntox-1][puntoy]=='I'){
			system("cls");
			lab[puntox][puntoy]=' ';
			puntox--;
			Imprimir();
		}
		break;

	case 80:
		if(lab[puntox+1][puntoy]=='.' || lab[puntox+1][puntoy]=='I'){
			system("cls");
			lab[puntox][puntoy]=' ';
			puntox++;
			Imprimir();
		}
		else if(lab[puntox+1][puntoy]==' '){
			system("cls");
			lab[puntox+1][puntoy]='.';
			puntox++;
			Imprimir();
		}
		break;

	case 75:
		if(lab[puntox][puntoy-1]==' '){
			system("cls");
			lab[puntox][puntoy-1]='.';
			puntoy--;
			Imprimir();
		}
		else if(lab[puntox][puntoy-1]=='.' || lab[puntox][puntoy-1]=='I'){
			system("cls");
			lab[puntox][puntoy]=' ';
			puntoy--;
			Imprimir();
		}
		break;

	case 77:
		if(lab[puntox][puntoy+1]=='.' || lab[puntox][puntoy+1]=='I'){
			system("cls");
			lab[puntox][puntoy]=' ';
			puntoy++;
			Imprimir();
		}
		else if(lab[puntox][puntoy+1]==' '){
			system("cls");
			lab[puntox][puntoy+1]='.';
			puntoy++;
			Imprimir();
		}
		break;
		}
	}
