#include <iostream>

using namespace std;
int n;

void factorial(){
	int fac=1;
	for(int i=2; i<=n; i++){
		fac = fac*i;
	}
	cout<<"Es: "<<fac;
}

int main(){
	cout<<"Factorial de: ";
	cin>>n;
	factorial();
	return 0;
}

