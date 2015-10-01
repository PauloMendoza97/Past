#include <iostream>
#include "vector.h"
#include <math.h>

using namespace std;

double Vector::distance(){
	cout<<"Distancia del Vector: ";
	return sqrt(((pow(end.x-start.x,2))+(pow(end.y-start.y,2))));
}

void Vector::print(){
	cout<<"Vector: "<<"("<<start.x<<","<<end.x<<")"<<" a "<<"("<<start.y<<","<<end.y<<")"<<endl;
}

int main() {
	Vector vec1;
	vec1.start.x = 3;
	vec1.start.y = 4;
	vec1.end.x = 5;
	vec1.end.y = 6;
	vec1.print();
	double distance = vec1.distance();
	cout<<distance<<endl;
}
