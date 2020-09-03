#include <iostream>
#include "ArrayStack.h"

int main() {
    ArrayStack<string> pt(2);

    pt.push("A");
    pt.push("B");

    pt.pop();
    pt.pop();

    pt.push("C");

    // Prints the top of the stack
    cout << "Top element is: " << pt.peekTop() << endl;

    // Returns the number of elements present in the stack
    cout << "Stack size is " << pt.size() << endl;

    pt.pop();

    // check if stack is empty or not
    if (pt.isEmpty())
        cout << "Stack Is Empty\n";
    else
        cout << "Stack Is Not Empty\n";    return 0;
}
