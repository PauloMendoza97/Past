#include <iostream>
#include <math.h>
using namespace std;
  
int main(){
  float rad, area, peri, pi, dia, lon;
  pi = 3.1415;
  cout<<"Ingrese el radio del circulo: ";
  cin>>rad;
  dia = 2*rad;
  lon = pi*dia;
  area = pi*pow(rad,2);
  peri = 2*pi*rad;
  cout<<"Diametro: "<<dia<<endl;
  cout<<"Longitud: "<<lon<<endl;
  cout<<"Area: "<<area<<endl;
  cout<<"Perimetro: "<<peri<<endl;
  return 0;
}
