#include <iostream>
using namespace std;
#include "array_list.h"

int main() {
    
    
     ArrayList<int> list;
     list.insert(0,1);
    list.insert(1,2);
    list.insert(2,3);
    cout << " the list after insertion " << endl;
    
    list.print();



       //int size=list.sizeo();
       //cout << "the size is " << size << endl;
       list.remove(1);
       cout << endl;
       
       cout << " list after removing "<< endl;
       
       list.print();
       cout << endl;
       
       int value= list[1];
       cout << " the value is " << value << endl;
}
