#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
	string license;
	int year;
public:
	Vehicle( const string &myLicense, const int myYear)
		: license(myLicense), year(myYear) {}
	const string getDesc() const
		{return license + " from " + stringify(year);}
	const string &getLicense() const {return license;}
	const int getYear() const {return year;} 
};

class Car : public Vehicle {
	string style;
public : 
	Car(const string &myLicense, const int myYear, const string &myStyle)
		: Vehicle(myLicense, myYear), style(myStyle) {}
	const string getDesc ()
		{return stringify ( year ) + ' ' + style + ": " + license;}
	const string &getStyle() {return style;}
};

int main(){
	Vehicle.veh;
	Car.bus;
	string licencia, estilo;
	int age;
	cout<<"Licencia: "<<endl ;
	cin>>licencia;
	cout<<"Año: "<<endl ;
	cin>>age;
	cout<<"Estilo: "<<endl ;
	cin>>estilo;
	Car.license=licencia;
	Car.year=age;
	Car.style=estilo;
	cout<<&getLicense()<<endl;
	cout<<&getYear()<<endl;
	cout<<&getStyle()<<endl;
}
