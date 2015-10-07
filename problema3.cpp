#include <iostream>
#include <algorithm> 

using namespace std; 

int main(){
	int arr[4000000];
	int n;
	cout<<"Ingrese el numero de elementos del array: ";
	cin>>n;
	arr[1] = arr[n];
	for(int i = 0; i<n; i++){
			cout<<"Ingrese el valor "<<"("<<i<<")"<<": ";
			cin>>arr[i];
	}
	cout<<"El arreglo ingresado es: ";
	for(int i = 0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	cout<<"El arreglo ordenado es: ";
	sort(arr,arr+n);
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
