#include <iostream>
#include <math.h>
#include "vector.h"

using namespace std;

double Vector::distance(){
	return sqrt((pow(end.x-start.x,2))+(pow(end.y-start.y,2)));
}

void Vector::print(){
	cout<<"Vector: "<<"Inicio ("<<start.x<<","<<start.y<<")"<<" y "<<"Fin ("<<end.x<<","<<end.y<<")"<<endl;
}

int main() {
	Vector vec1;
	cout<<"Ingrese Start X: ";
	cin>>vec1.start.x;
	cout<<"Ingrese End X: ";
	cin>>vec1.start.y;
	cout<<"Ingrese Start Y: ";
	cin>>vec1.end.x;
	cout<<"Ingrese End Y: ";
	cin>>vec1.end.y;
	cout<<"La distancia es: "<<vec1.distance()<<endl;
	vec1.print();
}
