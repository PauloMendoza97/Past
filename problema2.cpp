#include <iostream>
#include <string.h> 
#include <iostream>

using namespace std; 

int main() 
{ 
	char sinrep[40]=" "; 
	char palabra[40]; 
	int i=0, j=0; 
	cout<<"Ingresa una palabra: ";
	cin>>palabra; 
	while(palabra[i]){ 
		if(!strchr(sinrep, palabra[i])) 
			sinrep[j++]=palabra[i]; 
		i++; 
	} 
	sinrep[j]='\0';
	cout<<"La palabra sin letras repetidas es: "<<sinrep<<endl; 
	return 0;
}
