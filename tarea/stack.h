#include<iostream>
using namespace std;
template <class Type>
class stackType{
public:
	void initializeStack();
	bool isEmptyStack() const;
	bool isFullStack() const;
	void push(const Type& newItem);
	Type top() const;
	void pop();
	stackType(int stackSize = 101);
	~stackType();
	Type *list;
private:
	int maxStackSize;
	int stackTop; 
};
template <class Type>
void stackType<Type>::initializeStack(){
	stackTop = 0;
}
template <class Type>
bool stackType<Type>::isEmptyStack() const{
	return(stackTop == 0);
}
template <class Type>
bool stackType<Type>::isFullStack() const{
	return(stackTop == maxStackSize);
}
template <class Type>
void stackType<Type>::push(const Type& newItem){
	if (!isFullStack()){
		list[stackTop] = newItem;
		stackTop++;
	}
	else{cout << "No puede aumentar a una pila llena" << endl;}
}
template <class Type>
Type stackType<Type>::top() const{
	return list[stackTop - 1];
}
template <class Type>
void stackType<Type>::pop(){
	if (!isEmptyStack())
		stackTop--;
	else{cout << "Ya no puede borrar de una lista vacia" << endl;}
}
template <class Type>
stackType<Type>::stackType(int stackSize){
	if (stackSize <= 0){
		cout<<"En ves de 0 que le parece 100 ,y lo haremos asi"<<endl;
		maxStackSize = 100;
	}
	else
		maxStackSize = stackSize;
	stackTop = 0;
	list = new Type[maxStackSize];
}
template <class Type>
stackType<Type>::~stackType(){
	delete [] list;
}
template<class Type>
stackType<Type> operator+(const stackType<Type>A , const stackType<Type>B){
	stackType<Type>Temp(101);
	for (int i=0;i<50;i++){
		Temp.push(A.list[i]);
	}
	for(int j=0;j<50;j++){
		Temp.push(B.list[j]);
	}
	return Temp;
}
template<class Type>
stackType<Type> operator-(const stackType<Type>A , const stackType<Type>B){
	stackType<Type>Temp(101);
	for (int i=0;i<50;i++){
		int j=0;
		if(A.list[i]!=B.list[j]){
			Temp.push(A.list[i]);
		}
		j++;
	}
	return Temp;
}
int main(){
	stackType<int> pila(50);
	pila.initializeStack();
	pila.push(10);
	cout<<pila.top()<<endl;
	pila.pop();
	pila.push(44);
	cout<<pila.top()<<endl;
	stackType<int> pila2(50);
	pila2.initializeStack();
	pila2.push(10);
	stackType<int> pila3(100);
	
	stackType<int> pila4(50);
	pila4.initializeStack();
	pila4.push(665);
	stackType<int> pila5(50);
	pila5.initializeStack();
	pila5.push(2131);
	stackType<int> pila6(100);
	
	pila3=pila+pila2;
	pila4=pila5-pila6;
	return 0;
}
