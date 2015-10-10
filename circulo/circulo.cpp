#include <iostream>
#include <math.h>
#include "circulo.h"
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
