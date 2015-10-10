#include <iostream>
#define n 100

using namespace std;
int arr[400000];
int element;

void arr100(){
	arr[1] = arr[n];
	for(int i=0; i<n; i++)
	{
		arr[i]=i+1;
	}
	cout<<"El arreglo inicializado es: ";
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

void buscar(){
	for(int i=0; i<n; i++){
		if(arr[i]==element){
			cout<<"El elemento buscado se encuentra en la posicion "<<i<<"."<<endl;
		}
	}
}

int main(){
	arr100();
	cout<<"\n";
	cout<<"Elemento a buscar: ";
	cin>>element;
	buscar();
	return 0;
}
