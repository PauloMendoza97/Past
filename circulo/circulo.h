//circulo.h - header file
#include "circulopoint.h"

class Vector{
public:
	Point start, end;
	double rad();
	double diameter();
	double area();
	double perimeter();
	void print();
};
