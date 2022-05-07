#ifndef LAB5_ARRAY_H
#define LAB5_ARRAY_H

#include <iostream>
#include <vector>
using namespace std;
class BasException{
protected:
    string error;
public:
    virtual string check() = 0;
};

class NonExistentIndex: public BasException{
public:
    NonExistentIndex(){
        error = "No such index in this array";
    }

    string check() override{
        return error;
    }
};

template<typename T>
class Array{
private:
    int N;
    vector<T> v1;

    T IndexReference(T index){
        if (index < 0 || index > N){
            throw NonExistentIndex();
        }
        cout << v1[index];
    }
public:
    Array(){
        N = 0;
        v1.resize(N);
    }

    explicit Array(int n): N(n){
        v1.resize(N);
    }

    void fillArray(){
        for (int i = 1; i <= N; i++){
            cin >> v1[i];
        }
    }

    void showArray(){
        for (int i = 1; i <= N; i++){
            cout << v1[i] << " ";
        }
    }

    void tryIndex(T index){
        try{
            IndexReference(index);
        }catch (NonExistentIndex error){
            cout << error.check() << endl;
        }
    }

};




#endif //LAB5_ARRAY_H
