#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
	string text;
	ifstream bloc("archivo.txt");
	if (bloc.is_open()){
		while(getline(bloc,text)){
			cout << text <<endl;
		}
		bloc.close();
	}
	return 0;
}
