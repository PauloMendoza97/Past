#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string abrir(string text);

string abrir(string text){
	ifstream bloc("archivo.txt");
	if (bloc.is_open()){
		while(getline(bloc,text)){
			cout <<text<<endl;
		}
		bloc.close();
	}
}

int main(){
	string text;
	abrir(text);
	return 0;
}

