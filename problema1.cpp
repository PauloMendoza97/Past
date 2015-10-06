#include <iostream>
using namespace std;

int main(){
	int matrix1[100][100], matrix2[100][100], matrix3[100][100];
	int fil1, col1, col2;
	cout<<"Ingrese el numero de filas de Matriz 1: ";
	cin>>fil1;
	cout<<"Ingrese el numero de columnas de Matriz 1: ";
	cin>>col1;
	matrix1[1][1] = matrix1[fil1][col1];
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
	cout<<"\n";
	cout<<"El numero de filas de Matriz 2 es: "<<col1<<endl;
	cout<<"Ingrese el numero de columnas de Matriz 2: ";
	cin>>col2;
	matrix2[1][1] = matrix2[col1][col2];
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
	for(int i=0; i<fil1; ++i)
		for(int j=0; j<col2; ++j)
			matrix3[i][j] = 0;
	for(int i=0; i<fil1; ++i)
		for(int j=0; j<col2; ++j)
			for(int z=0; z<col1; ++z)
				matrix3[i][j] += matrix1[i][z] * matrix2[z][j];
	cout<<"\n";
	cout<<"La Matriz 1 por la Matriz 2 es:"<<endl;
	for(int i=0; i<fil1; ++i){
		for(int j=0; j<col2; ++j){
			cout<<matrix3[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
