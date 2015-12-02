#include "tamaniopiezas.cpp"

using namespace std;

void TituloMenu();
void Opciones(int opcn);
void ListaOpciones();
int opcion;

void TituloMenu()
{
	cout<<"\n"<<endl;
	cout<<""<<endl;
	cout<<"\t   _|_|_|     _|_|     _|      _|     _|_|     _|    _|   _|    _|"<<endl;
	cout<<"\t _|         _|    _|   _|_|  _|_|   _|    _|   _|  _|     _|    _|"<<endl;
	cout<<"\t _|  _|_|   _|    _|   _|  _|  _|   _|    _|   _|_|       _|    _|"<<endl;
	cout<<"\t _|    _|   _|    _|   _|      _|   _|    _|   _|  _|     _|    _|"<<endl;
	cout<<"\t   _|_|_|     _|_|     _|      _|     _|_|     _|    _|     _|_|"<<endl;
	cout<<""<<endl; 
	cout<<"\t Presione una tecla para continuar."<<endl;
	getchar();
	system("cls");
	ListaOpciones();
}

void ListaOpciones()
{
	cout<<"\n"<<endl;
	cout<<""<<endl;
	cout<<"\t   _|_|_|     _|_|     _|      _|     _|_|     _|    _|   _|    _|"<<endl;
	cout<<"\t _|         _|    _|   _|_|  _|_|   _|    _|   _|  _|     _|    _|"<<endl;
	cout<<"\t _|  _|_|   _|    _|   _|  _|  _|   _|    _|   _|_|       _|    _|"<<endl;
	cout<<"\t _|    _|   _|    _|   _|      _|   _|    _|   _|  _|     _|    _|"<<endl;
	cout<<"\t   _|_|_|     _|_|     _|      _|     _|_|     _|    _|     _|_|"<<endl;
	cout<<""<<endl; 
	cout<<"\t 1. Empezar el juego."<<endl;
	cout<<"\t 2. Instrucciones."<<endl;
	cout<<"\t 3. Sobre el Juego."<<endl;
	cout<<"\t 4. Creditos."<<endl;
	cout<<"\t 5. Salir."<<endl;
	cout<<""<<endl;
	cout<<"\t Selecciona una opción: ";
	cin>>opcion;
	system("cls");
	Opciones(opcion);
}

void Opciones(int opc)
{	
	if(opc==1){
		SelecTamanio();
	}
	
	if(opc==2){
		cout<<"\n"<<endl;
		cout<<""<<endl;
		cout<<"\t .-. . . .-. .-. .-. . . .-. .-. .-. .-. . . .-. .-."<<endl;
		cout<<"\t  |  |/| `-.  |  |(  | | |   |    |  | | |/| |-  `-."<<endl;
		cout<<"\t `-' ' ` `-'  '  ' ' `-' `-' `-' `-' `-' ' ` `-' `-'"<<endl;
		cout<<""<<endl;
		cout<<"\t Introduce en números la fila y la columna en la cuál quieres colocar tu ficha,"<<endl;
		cout<<"\t en caso escribas una posición que ya esté ocupada, tendrás que escribir otra."<<endl;
		cout<<""<<endl;
		int reg;
		cout<<"\t Presiona 1 para regresar al Menú Principal y 0 para salir: ";
		cin>>reg;
		system("cls");
		if(reg==0){
			exit(0);
		}
		if(reg==1){
			ListaOpciones();
		}
	}
	
	if(opc==3){
		cout<<"\n"<<endl;
		cout<<""<<endl;
		cout<<"\t .-. .-. .-. .-. .-.   .-. .       . . . .-. .-. .-."<<endl;
		cout<<"\t `-. | | |(  |(  |-    |-  |       | | | |-  |.. | |"<<endl;
		cout<<"\t `-' `-' `-' ' ' `-'   `-' `-'   `-' `-' `-' `-' `-'"<<endl;
		cout<<""<<endl;
		cout<<"\t El Go-moku (del japonés \"go\" = cinco, y \"moku\" en este caso se toma como punto,"<<endl;
		cout<<"\t también llamado cinco en línea o cinco en raya)"<<endl;
		cout<<"\t se juega en el mismo tablero del Go, es decir 19 x 19."<<endl;
		cout<<""<<endl;
		cout<<"\t Las piezas se colocan en las intersecciones comenzando por el jugador con las fichas negras"<<endl;
		cout<<"\t y después el de fichas blancas,colocando una piedra por turno, alternadamente."<<endl;
		cout<<""<<endl;
		cout<<"\t El objetivo del juego es lograr 5 piedras consecutivas en línea (ya sea horizontal, vertical o diagonal)."<<endl;
		cout<<""<<endl;
		cout<<"\t Por considerarse que negro tiene ventaja por comenzar, se crearon algunas reglas como la que dice"<<endl; 
		cout<<"\t que únicamente puede ganar negro si tiene una línea de 5 piedras exactas, por lo que si se hacen líneas de"<<endl;
		cout<<"\t 6 o más, no cuentan como victoria."<<endl;
		cout<<""<<endl;
		cout<<"\t Existe también otra regla que dice que negro no puede colocar una piedra que forme"<<endl;
		cout<<"\t dos líneas de 3 piedras al mismo tiempo, aún cuando ese movimiento "<<endl;
		cout<<"\t sirviese para bloquear al contrincante."<<endl;
		cout<<""<<endl;
		int reg;
		cout<<"\t Presiona 1 para regresar al Menú Principal y 0 para salir: ";
		cin>>reg;
		system("cls");
		if(reg==0){
			exit(0);
		}
		if(reg==1){
			ListaOpciones();
		}
	}
	
	if(opc==4){
		cout<<"\n"<<endl;
		cout<<""<<endl;
		cout<<"\t .-. .-. .-. .-. .-. .-. .-. .-."<<endl;
		cout<<"\t |   |(  |-  |  ) |   |  | | `-."<<endl;
		cout<<"\t `-' ' ' `-' `-' `-'  '  `-' `-'"<<endl;
		cout<<""<<endl;
		cout<<"\t Juego realizado por:"<<endl;
		cout<<""<<endl;
		cout<<"\t * Giancarlo Andre Anco Valdivia."<<endl;
		cout<<"\t   https://sites.google.com/site/giancarloanco/"<<endl;
		cout<<""<<endl;
		cout<<"\t * Rodrigo Jesús Alí Guevara."<<endl;
		cout<<"\t   https://sites.google.com/a/ucsp.edu.pe/rodrigo-jesus-ali-guevara/"<<endl;
		cout<<""<<endl;
		
		int reg;
		cout<<"\t Presiona 1 para regresar al Menú Principal y 0 para salir: ";
		cin>>reg;
		system("cls");
		if(reg==0){
			exit(0);
		}
		if(reg==1){
			ListaOpciones();
		}
	}
	
	if(opc==5){
		exit(0);
	}
}
