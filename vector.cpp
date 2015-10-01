#include <iostream>
#include <math.h>
using namespace std;

float p;
float q;
float r;
float s;
float a;
float b;
float c;
float d;
float d1;
float d2;

class Point{
public:
	double x,y;
};

class Vector{
public:
	Point start, end;
};

int main() {
	Vector vec1;
	vec1.start.x = 3.0;
	vec1.start.y = 4.0;
	vec1.end.x = 5.0;
	vec1.end.y = 6.0;
	Vector vec2;
	vec2.start = vec1.start;
	vec2.end.x = 7.0;
	vec2.end.y = 8.0;
	p = vec1.start.x;
	q = vec1.end.x;
	r = vec1.start.y;
	s = vec1.end.y;
	a = vec2.start.x;
	b = vec2.end.x;
	c = vec2.start.y;
	d = vec2.end.y;
	d1 = sqrt(((pow(q-p,2))+(pow(s-r,2))));
	d2 = sqrt(((pow(b-a,2))+(pow(d-c,2))));
	cout<<"Vector 1: "<<"("<<p<<","<<q<<")"<<" a "<<"("<<r<<","<<s<<")"<<endl;
	cout<<"Vector 2: "<<"("<<a<<","<<b<<")"<<" a "<<"("<<c<<","<<d<<")"<<endl;
	cout<<"Distancia del Vector 1: "<<d1<<endl;
	cout<<"Distancia del Vector 2: "<<d2<<endl;
}
