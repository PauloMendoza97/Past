#include <iostream>
#define n 100

using namespace std;
char letra;
char nombre[9] = {'R','o','d','r','i','g','o'};

void buscarletra(){
	for(int i=0; nombre[i]; i++){
		nombre[i] = tolower(nombre[i]);
	}
	cout<<"Letra a buscar: ";
	cin>>letra;
	for(int i=0; nombre[i]; i++){
		if(nombre[i]==letra){
			cout<<"La letra se encuentra en la posicion "<<i<<"."<<endl;
		}
	}
}

int main(){
	cout<<"Tu nombre es: "<<nombre;
	cout<<"\n";
	buscarletra();
}

