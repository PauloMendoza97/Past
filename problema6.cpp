#include <iostream>
#include <string>

using namespace std;

void copiar(string a, string b){
	b=a;
}
string juntar(string a, string b){
	a+=b;
	return a;
}
int longitud(string a){
	return a.size();
}
void comparar(string a, string b){
	if(a==b){
		cout<<"Las cadenas son iguales."<<endl;
	}
	else{
		cout<<"Las cadenas no son iguales."<<endl;
	}
}
int main(){
	string a, b;
	int op;
	cout<<"Ingrese la cadena A: ";
	cin>>a;
	cout<<"Ingrese cadena B: ";
	cin>>b;
	cout<<"\n";
	cout<<"1. Copiar el contenido de una cadena en otra"<<endl;
	cout<<"2. Juntar cadenas"<<endl;
	cout<<"3. Longitud de las cadenas"<<endl;
	cout<<"4. Comparar cadenas"<<endl;
	cout<<"\n";
	cout<<"Seleccione una opcion: ";
	cin>>op;
	cout<<" "<<endl;
	if (op==1){
		int r;
		cout<<"Copiar A en B, escriba 0"<<endl;
		cout<<"Copiar B en A, escriba 1"<<endl;		
		cin>>r;
		if (r==0){
			copiar(a,b);
			cout<<"La cadena B ahora es: "<<b<<endl;
		}
		if (r==1){
			copiar(b,a);
			cout<<"La cadena A ahora es: "<<b<<endl;
		}
	}
	if (op==2){
		cout<<"La cadena resultante es: "<<juntar(a,b)<<endl;
	}
	if (op==3){
		int s;
		cout<<"Longitud de A, escriba 0"<<endl;
		cout<<"Longitud de B, escriba 1"<<endl;		
		cin>>s;
		if (s==0){
			cout<<"Longitud de A: "<<longitud(a)<<endl;
		}
		if (s==1){
			cout<<"Longitud de B: "<<longitud(b)<<endl;
		}
	}
	if (op==4){
		comparar(a,b);
	}
}
