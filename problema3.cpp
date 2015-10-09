#include <iostream>
#include <algorithm> 

using namespace std;
int arr[4000000];
int n;

void creararr(){
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
}

void ssort(){
	int temporal;
	for(int i=0; i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temporal=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temporal;
			}
		}
	}
	cout<<"El arreglo ordenado por ssort es: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
} 

void sort(){
	cout<<"El arreglo ordenado por sort es: ";
	sort(arr, arr+n);
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	cout<<"Ingrese el numero de elementos del array: ";
	cin>>n;
	creararr();
	cout<<"\n";
	ssort();
	cout<<"\n";
	sort();
	return 0;
}
