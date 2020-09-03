//
// Created by Thomas Zoméro on 03/09/2020.
//

#ifndef DATASTRUCTURES_ARRAYQUEUE_H
#define DATASTRUCTURES_ARRAYQUEUE_H

#include <iostream>
#include <string>

using namespace std;


#define DEF_CAPACITY 100 // default stack capacity

template<class  X>
class ArrayQueue {

public:
    ArrayQueue(int size = DEF_CAPACITY);

    void dequeue();
    void enqueue(X);

    X peekTop();
    int size();
    bool isEmpty();
    bool isFull();

private:
    X *arr;
    int capacity;
    int front;
    int rear;
    int count;
};


template<class X>
ArrayQueue<X>::ArrayQueue(int size) {
    arr = new X[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

template<class X>
void ArrayQueue<X>::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue UnderFlow" << std::endl;
    } else {
        std::cout << "Removing " << arr[front] << std::endl;
        front = (front + 1) % capacity;
        count --;
    }
}

template<class X>
void ArrayQueue<X>::enqueue(X item) {
    if (isFull()) {
        std::cout << "Queue OverFlow" << std::endl;
    } else {
        std::cout << "Inserting " << item << std::endl;
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        count++;
    }
}

template<class X>
X ArrayQueue<X>::peekTop() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        return arr[front];
    }

}

template<class X>
int ArrayQueue<X>::size() {
    return count;
}

template<class X>
bool ArrayQueue<X>::isEmpty() {
    return (size() == 0);
}

template<class X>
bool ArrayQueue<X>::isFull() {
    return (size() == capacity);
}




#endif //DATASTRUCTURES_ARRAYQUEUE_H
