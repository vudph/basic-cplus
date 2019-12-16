#include "LinkedList.h"

LinkedList::LinkedList() {
    m_head = nullptr;
    m_tail = nullptr;
    m_size = 0;
}

LinkedList::~LinkedList() {
    cout << "LinkedList deleted" << endl;
}

void LinkedList::insertFirst(int data) {
    Node *p = new Node(data);
    if (isEmpty()) {
        m_head = m_tail = p;
    } else {
        p->next = m_head;
        m_head->prev = p;
        m_head = p;
    }
    m_size++;
}

void LinkedList::insertLast(int data) {
    Node *p = new Node(data);
    if (isEmpty()) {
        m_head = m_tail = p;
    } else {
        m_tail->next = p;
        p->prev = m_tail;
        m_tail = p;
    }
    m_size++;
}

void LinkedList::deleteFirst() {
    if (!isEmpty()) {
        Node *oldHead = m_head;
        m_head = m_head->next;
        if (m_head != nullptr)
            m_head->prev = nullptr;
        delete oldHead;
        m_size--;
    }
}

void LinkedList::deleteLast() {
    if (!isEmpty()) {
        Node *oldTail = m_tail;
        m_tail = m_tail->prev;
        if (m_tail != nullptr)
            m_tail->next = nullptr;
        delete oldTail;
        m_size--;
    }
}

bool LinkedList::isEmpty() {
    return m_head == nullptr;
}

int LinkedList::size() {
    return m_size;
}

void LinkedList::print() {
    Node *p = m_head;
    while (p != nullptr) {
        cout << p->data << "<->";
        p = p->next;
    }
}

void LinkedList::deleteNode(int data) {
    while (m_head->data == data) {
        Node *oldHead = m_head;
        m_head = m_head->next;
        delete oldHead;
        m_size--;
    }
    if (m_head == nullptr)
        return;
    m_head->prev = nullptr;
    Node *p = m_head;
    while (p->next != nullptr) {
        if (p->next->data == data) {
            Node *tmp = p->next;
            p->next = tmp->next;
            if (tmp->next != nullptr)
                tmp->next->prev = p;
            delete tmp;
            m_size--;
        } else {
            p = p->next;
        }
    }
    m_tail = p;
}

LinkedList* LinkedList::deepCopy() {
    LinkedList *other = new LinkedList();
    if (size() > 0) {
        other->m_head = new Node(m_head->data);
        Node *p = other->m_head;
        Node *walk = m_head->next;
        while (walk != nullptr) {
            Node *tmp = new Node(walk->data);
            tmp->prev = p;
            p->next = tmp;
            p = tmp;
            walk = walk->next;
        }
        other->m_tail = p;
        other->m_size = size();
    }
    return other;
}



