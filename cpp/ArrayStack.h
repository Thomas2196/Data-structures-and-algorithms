//
// Created by Thomas Zoméro on 02/09/2020.
//

#ifndef DATASTRUCTURES_ARRAYSTACK_H
#define DATASTRUCTURES_ARRAYSTACK_H

#include <iostream>
#include <string>

using namespace std;


#define DEF_CAPACITY 100 // default stack capacity

template<class  X>
class ArrayStack {

public:
    explicit ArrayStack(int a_capacity = DEF_CAPACITY); // constructor from capacity
    ~ArrayStack() { delete [] arr; }

    int size() const;
    bool isEmpty() const;
    bool isFull() const;

    void push(X);
    X pop();
    X peekTop();

private:
    X* arr;
    int capacity;
    int top;

};

template<class X>
ArrayStack<X>::ArrayStack(int a_capacity) {
    arr = new X[a_capacity];
    capacity = a_capacity;
    top = -1;
}


template <class X>
int ArrayStack<X>::size() const {
    return (top+1);
}

template<class X>
bool ArrayStack<X>::isEmpty() const {
    return (top == -1);
}

template <class X>
bool ArrayStack<X>::isFull() const {
    return (top == capacity-1);
}


template<class X>
void ArrayStack<X>::push(X x) {
    if (isFull()) {
        std::cout << "Stack OverFlow" << std::endl;
    } else {
        std::cout << "Inserting " << x << std::endl;
        arr[++top] = x;
    }
}

template<class X>
X ArrayStack<X>::pop() {
    if (isEmpty()) {
        std::cout << "Stack UnderFlow" << std::endl;
    } else {
        std::cout << "Removing " << peekTop() << std::endl;
    }
    return arr[top--];
}

template<class X>
X ArrayStack<X>::peekTop() {
    if (isEmpty()) {
    } else {
        return arr[top];
    }
}


#endif //DATASTRUCTURES_ARRAYSTACK_H
