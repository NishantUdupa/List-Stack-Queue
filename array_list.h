#pragma once
#include <iostream>
using namespace std;

template <class T>
class ArrayList {

public:


ArrayList(){
    size=0;
    
}
    

    void insert(T k, T element){
        
        arr[k]= element;
        //cout << "inserted";
        size++;
        
        
    }
    
    
    void remove (T ind){
        
        
         for(int i=ind;i<=size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[size-1]={};
        
        size--;
        
    }
    
    void print(){
        
        for (int i=0;i<=size-1;i++){
        cout << arr[i] << " ";
    }
        
    }
    
    const T & operator [] (T size){
        
        return arr[size];
        
    }
    
    
 
   
    T sizeo();
 
 
   
 
private:
    T size;

    T arr[10];
    
    
};

template <class T> T ArrayList<T>::sizeo(){
    
    return size;
    
    
}





