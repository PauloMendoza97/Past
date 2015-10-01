#include <iostream>
#include "circulo.h"
#include <math.h>

using namespace std;

double Vector::rad(){
	cout<<"Radio: ";
	return sqrt(((pow(end.x-start.x,2))+(pow(end.y-start.y,2))));
}

double Vector::diameter(){
	cout<<"Diametro: ";
	return (sqrt(((pow(end.x-start.x,2))+(pow(end.y-start.y,2)))))*2;
}

void Vector::print(){
	cout<<"Centro: "<<"("<<start.x<<","<<end.x<<")"<<endl;
}

int main() {
	float p, q, r, s, pi;
	pi = 3.1415;
	Vector vec1;
	cout<<"Ingrese coordenadas del centro: "<<endl;
	cin>>p;
	cin>>q;
	cout<<"Ingrese un punto de la circunferencia: "<<endl;
	cin>>r;
	cin>>s;
	vec1.start.x = p;
	vec1.start.y = r;
	vec1.end.x = q;
	vec1.end.y = s;
	vec1.print();
	double rad = vec1.rad();
	cout<<rad<<endl;
	double diameter = vec1.diameter();
	cout<<diameter<<endl;
	cout<<"Area: "<<pi*pow(rad,2)<<endl;
	cout<<"Perimetro: "<<2*pi*rad<<endl;
}
