#include "Queue.h"

Queue::Queue() {
    m_first = nullptr;
    m_last = nullptr;
    m_size = 0;
}

bool Queue::isEmpty() {
    return m_first == nullptr;
}

int Queue::size() {
    return m_size;
}

void Queue::enqueue(int data) {
    QNode *p = new QNode(data);
    if (isEmpty()) {
        m_first = m_last = p;
    } else {
        m_last->next = p;
        m_last = p;
    }
    m_size++;
}

int Queue::dequeue() {
    if (!isEmpty()) {
        QNode *p = m_first;
        m_first = m_first->next;
        if (m_first == nullptr) {
            m_last = nullptr;
        }
        int data = p->data;
        delete p;
        m_size--;

        return data;
    }
    throw "Queue is empty";
}

void Queue::print() {
    QNode *walk = m_first;
    while (walk != nullptr) {
        std::cout << walk->data << "->";
        walk = walk->next;
    }
}
