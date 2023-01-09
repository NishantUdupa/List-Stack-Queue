#include <iostream>
#include "stack.h"

int main() {
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.pop();
    int value= stack.topElement();
    cout << "value at top is " << value << endl;
    return 0;
}