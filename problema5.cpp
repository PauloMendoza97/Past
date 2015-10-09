#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string text;

void abrirfile(){
	ifstream bloc("archivo.txt");
	if (bloc.is_open()){
		while(getline(bloc,text)){
			cout<<text<<endl;
		}
		bloc.close();
	}
}

int main(){
	abrirfile();
	return 0;
}
