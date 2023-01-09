

#include <iostream>
#include "doubly_linked_list.h"

using namespace std;

int main()
{
    LinkedList <int> list;
    list.insert(0,1);
    list.insert(1,2);
    list.insert(2,3);
    list.displayAll();
    
    int size= list.length();
    
    
    cout << " The size is " << size << endl;
    
    list.remove(1);
    
    list.displayAll();
    
    
    



    return 0;
}
