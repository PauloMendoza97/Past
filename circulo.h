//circulo.h - header file

class Point{
public:
	double x,y;
};

class Vector{
public:
	Point start, end;
	double rad();
	double diameter();
	double area();
	double perimeter();
	void print();
};
