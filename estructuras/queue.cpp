#include <iostream>
#include "queue.h"

template<typename T>
bool Queue1<T>::vacio(){
	return cola.empty();
}

template<typename T>
int Queue1<T>::tamano(){
	return cola.size();
}

template<typename T>
T Queue1<T>::front(){
	return cola.front();
}

template<typename T>
T Queue1<T>::back(){
	return cola.back();
}

template<typename T>
void Queue1<T>::push(T valor){
	cola.push_back(valor);
}

template<typename T>
void Queue1<T>::pop(){
	cola.erase(cola.begin());
}

template<typename T>
void Queue1<T>::print(){
	for(int i=0; i <cola.size(); i++){
		cout<<cola[i]<<" ";
	}
	cout<<endl;
}

template<typename T>
Queue1<T> Queue1<T>::operator+(Queue1<T> col)
{
	Queue1<T> tmp;
	tmp.cola = cola;
	tmp.cola.insert(tmp.cola.end(), col.cola.begin(), col.cola.end());
	return tmp;	
}

template class Queue1<int>;
