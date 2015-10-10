#include <iostream>

using namespace std;
int **matrix1, **matrix2, **matrix3;
int fil1, col1, col2;

void matriz1(){
	matrix1 = new int *[fil1];
	for(int i = 0; i<fil1; i++){
		matrix1[i] = new int[col1];
	}
	for(int i = 0; i<fil1; i++){
		for(int j = 0; j<col1; j++){
			cout<<"Ingrese el valor "<<"("<<i<<","<<j<<")"<<": ";
			cin>>matrix1[i][j];
		}
	}
	cout<<"\n";
	cout<<"Matriz 1:"<<endl;
	for(int i = 0; i<fil1; i++){
		for(int j = 0; j<col1; j++){
			cout<<matrix1[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void matriz2(){
	matrix2 = new int *[col1];
	for(int i = 0; i<col1; i++)    {
		matrix2[i] = new int[col2];
	}
	for(int i = 0; i<col1; i++){
		for(int j = 0; j<col2; j++){
			cout<<"Ingrese el valor "<<"("<<i<<","<<j<<")"<<": ";
			cin>>matrix2[i][j];
		}
	}
	cout<<"\n";
	cout<<"Matriz 2:"<<endl;
	for(int i = 0; i<col1; i++){
		for(int j = 0; j<col2; j++){
			cout<<matrix2[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void productMatrix(){
	matrix3 = new int *[fil1];
	for(int i = 0; i<fil1; i++){
		matrix3[i] = new int[col2];
	}
	for(int i=0; i<fil1; ++i){
		for(int j=0; j<col2; ++j){
			matrix3[i][j] = 0;
		}
	}
	for(int i=0; i<fil1; ++i){
		for(int j=0; j<col2; ++j){
			for(int z=0; z<col1; ++z){
				matrix3[i][j] += matrix1[i][z] * matrix2[z][j];
			}
		}
	}
	cout<<"\n";
	cout<<"La Matriz 1 por la Matriz 2 es:"<<endl;
	for(int i=0; i<fil1; ++i){
		for(int j=0; j<col2; ++j){
			cout<<matrix3[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Ingrese el numero de filas de Matriz 1: ";
	cin>>fil1;
	cout<<"Ingrese el numero de columnas de Matriz 1: ";
	cin>>col1;
	matriz1();
	cout<<"\n";
	cout<<"El numero de filas de Matriz 2 es: "<<col1<<endl;
	cout<<"Ingrese el numero de columnas de Matriz 2: ";
	cin>>col2;
	matriz2();
	productMatrix();
	return 0;
}

