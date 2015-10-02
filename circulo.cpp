#include <iostream>
#include "circulo.h"
#include <math.h>
#define pi 3.14

using namespace std;

double Vector::rad(){
	cout<<"Radio: ";
	return sqrt(pow((end.x-start.x),2)+pow((end.y-start.y),2));
}

double Vector::diameter(){
	cout<<"Diametro: ";
	return sqrt(pow((end.x-start.x),2)+pow((end.y-start.y),2))*2;
}

double Vector::area(){
	cout<<"Area: ";
	return pi*pow(sqrt(pow((end.x-start.x),2)+pow((end.y-start.y),2)),2);
}

double Vector::perimeter(){
	cout<<"Perimetro: ";
	return pi*sqrt(pow((end.x-start.x),2)+pow((end.y-start.y),2))*2;
}

void Vector::print(){
	cout<<"Centro: "<<"("<<start.x<<","<<start.y<<")"<<endl;
}

int main() {
	Vector vec1;
	cout<<"Ingrese coordenadas del centro: "<<endl;
	cin>>vec1.start.x;
	cin>>vec1.start.y;
	cout<<"Ingrese un punto de la circunferencia: "<<endl;
	cin>>vec1.end.x;
	cin>>vec1.end.y;
	vec1.print();
	double rad = vec1.rad();
	cout<<rad<<endl;
	double diameter = vec1.diameter();
	cout<<diameter<<endl;
	double area = vec1.area();
	cout<<area<<endl;
	double perimeter = vec1.perimeter();
	cout<<perimeter<<endl;
}
