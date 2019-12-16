#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

using namespace std;

struct LNode {
    LNode(){}
    LNode(int d) {
        data = d;
        next = prev = nullptr;
    }
    int data;
    LNode *next;
    LNode *prev;
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
    LNode *m_head;
    LNode *m_tail;
    int m_size;
};


#endif // LINKEDLIST_H
