#include <iostream>

using namespace std;

int main(){
	int n, fac;
	fac=1;
	cout<<"Factorial de: ";
	cin>>n;
	for(int i=2; i<=n; i++){
		fac = fac*i;
	}
	cout<<"Es: "<<fac;
	return 0;
}
