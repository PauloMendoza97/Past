#include <iostream>
#include "point.h"

using namespace std;

int main() {
	Point p(0,0);
	int x1, y1, x2, y2;
	cout<<"Ingresa el valor de X1 y Y1:"<<endl;
	cin>>x1>>y1;
	p.setX(x1);
	p.setY(y1);
	cout<<"El valor de X es: "<<p.getX()<<endl;
	cout<<"El valor de Y es: "<<p.getY()<<endl;
	cout<<"El punto 1 es: ";
	cout<<"("<<p.getX()<<","<<p.getY()<<")"<<endl;
	cout<<"\n";
	cout<<"Ingresa el valor de X2 y Y2:"<<endl;
	cin>>x2>>y2;
	p.setX(x2);
	p.setY(y2);
	cout<<"El valor de X es: "<<p.getX()<<endl;
	cout<<"El valor de Y es: "<<p.getY()<<endl;
	cout<<"El punto 2 es: ";
	cout<<"("<<p.getX()<<","<<p.getY()<<")"<<endl;
}
