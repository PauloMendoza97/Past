//point.h - header file
#include <iostream>

using namespace std;

class Point{
private:
	double x1, y1;
public:
	Point(){x1 = 0;y1 = 0;}
	Point(double x,double y){
		x1=x;
		y1=y;
	}
	double getx(){
		return x1;
	}
	double gety(){
		return y1;
	}
	void setx(double x){
		x1=x;
		return;
	}
	void sety(double y){
		y1=y;
		return;
	}
};
