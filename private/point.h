//point.h - header file

class Point{
	
private:
	double x, y;
	
public:
	Point(double nx, double ny){
		x = nx; y = ny;
	}
	double getX() {return x;}
	double setX(int x1) {x=x1;}
	double getY() {return y;}
	double setY(int y1) {y=y1;}
};
