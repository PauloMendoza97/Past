#include <iostream>
#include "circulo.cpp"

using namespace std;

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
