#include <iostream>
#include <ctype.h>

using namespace std;
string palabra;

void mayus(){
	palabra[0] = toupper(palabra[0]);
	cout<<"La palabra en mayuscula es: "<<palabra;
}

int main()
{
	cout<<"Ingrese una palabra: "<<endl;
	cin>>palabra;
	mayus();
	return 0;
}
