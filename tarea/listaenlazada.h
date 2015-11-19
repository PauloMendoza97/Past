#include <vector>
 using namespace std;
 template<typename T>
 class Lista{
 private:
    vector<T>container;
 public:
    void Add_item(T item){
        container.push_back();
    }
    void Delete_item(long long int position){
        container.erase(container.begin()+position);
    }
    void Insert_item(T item, long long int position){
        container.insert(container.begin()+position, item);
    }
    long long int Size(){
        return container.size();
    }
    vector<T>getContainer(){
        return container;    
    }
    Lista<T> operator+(Lista<T> listab){
        vector<T>vec(listab.getContainer());
        Lista<T>lista3;
        for(int i=0;i<container.size();++i){
            lista3.Add_item(container[i]);
        }
        for(int i=0;i<vec.size();++i){
            lista3.Add_item(vec[i]);
        }
        return lista3;
    }
 };
