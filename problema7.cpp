#include <iostream>
using namespace std;

int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

int main() {
	cout<<"a. "<<**matr<<": es verdadero."<<endl;
	cout<<"b. "<<*(*(matr+1)+2)<<": es verdadero."<<endl;
	cout<<"c. "<<*(matr[2]+3)<<": es verdadero."<<endl;
	cout<<"d. "<<(*(matr+2))[2]<<": es verdadero."<<endl;
	cout<<"e. "<<*((*matr)+1)<<": es falso."<<endl;
}
