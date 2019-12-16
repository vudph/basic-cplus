#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

struct QNode {
    QNode() {}
    QNode(int data) {
        this->data = data;
        this->next = nullptr;
    }
    int data;
    QNode *next;
};

class Queue {
public:
    Queue();
    void enqueue(int data);
    int dequeue();
    int size();
    void print();
    bool isEmpty();
private:
    int m_size;
    QNode *m_first;
    QNode *m_last;
};

#endif // QUEUE_H
