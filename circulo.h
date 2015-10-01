//vector.h - header file

class Point{
public:
	double x,y;
};

class Vector{
public:
	Point start, end;
	double rad();
	double diameter();
	void print();
};

class Circle{
public:
	void area();
	void perimeter();
};
