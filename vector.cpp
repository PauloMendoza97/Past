#include <iostream>
#include "vector.h"
#include <math.h>

using namespace std;

double Vector::distance(){
	cout<<"Distancia del Vector: ";
	return sqrt(((pow(end.x-start.x,2))+(pow(end.y-start.y,2))));
}

void Vector::print(){
	cout<<"Vector: "<<"Inicio ("<<start.x<<","<<end.x<<")"<<" y "<<"Fin ("<<start.y<<","<<end.y<<")"<<endl;
}

int main() {
	float p, q, r, s;
	Vector vec1;
	cout<<"Ingrese start x: ";
	cin>>p;
	cout<<"Ingrese end x: ";
	cin>>q;
	cout<<"Ingrese start y: ";
	cin>>r;
	cout<<"Ingrese end y: ";
	cin>>s;
	vec1.start.x = p;
	vec1.start.y = r;
	vec1.end.x = q;
	vec1.end.y = s;
	vec1.print();
	double distance = vec1.distance();
	cout<<distance<<endl;
}
