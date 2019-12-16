#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

using namespace std;

struct Node {
    Node(){}
    Node(int d) {
        data = d;
        next = prev = nullptr;
    }
    int data;
    Node *next;
    Node *prev;
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void insertFirst(int data);
    void insertLast(int data);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int data);
    void print();
    int size();
    bool isEmpty();
    LinkedList *deepCopy();
private:
    Node *m_head;
    Node *m_tail;
    int m_size;
};


#endif // LINKEDLIST_H
