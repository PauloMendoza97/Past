#include <iostream>

using namespace std;
int n, fac;

void factorial(){
	fac=1;
	for(int i=2; i<=n; i++){
		fac = fac*i;
	}
}

int main(){
	cout<<"Factorial de: ";
	cin>>n;
	factorial();
	cout<<"Es: "<<fac;
	return 0;
}
