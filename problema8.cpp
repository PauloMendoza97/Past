#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	string palabra;
	char cadena[40];
	cout<<"Ingrese una palabra: "<<endl;
	cin>>palabra;
	int i;
	for(i=0; palabra[i]; i++){
		palabra[i] = toupper(palabra[i]);
	}
	cout<<"La palabra en mayuscula es: "<<palabra;
	return 0;
}
