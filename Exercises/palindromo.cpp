#include <iostream>
using namespace std;

int check=0;
char palabra[15],*palindroma=&palabra[0];

int main(){
	cout<<"Ingrese las letras"<<endl;
	for (int i=0;i<15;i++){
		cin>>palabra[i];
	}
	for (int j=0;j<15;j++){
		if (*(palindroma+j)==*(palindroma+(14-j))){
			if (14-j!=1){
				check++;
			}	
		}
	}
	if (check==14){
		cout<<palabra<<" es palindroma"<<endl;
	}
	else{
		cout<<palabra<<" no es palindroma"<<endl;
	}
	return 0;
}
