#ifndef MINSTACK_H
#define MINSTACK_H
#include<algorithm>
#include<stack>

using namespace std;

class MinStack {
//public:
//    stack<int> primary;
//    stack<int> minStack;

//    MinStack() {

//    }

//    void push(int x) {

//        primary.push(x);
//        if(minStack.empty() || x <= minStack.top())
//            minStack.push(x);
//    }

//    void pop() {

//        if(!primary.empty() && !minStack.empty() && minStack.top() == primary.top())
//            minStack.pop();
//        primary.pop();

//    }

//    int top() {
//        return primary.top();
//    }

//    int getMin() {
//        return minStack.top();
//    }
private:
    typedef struct Node {
        int data;
        int min;
        Node *next;
        Node(int data, int min) {
            this->data = data;
            this->min = min;
            this->next = nullptr;
        }
    } Node;

    Node *m_head;
public:
    /** initialize your data structure here. */
    MinStack() : m_head(nullptr) {

    }

    void push(int x) {
        if (m_head == nullptr) {
            m_head = new Node(x, x);
        } else {
            Node *oldhead = m_head;
            m_head = new Node(x, std::min(x, m_head->min));
            m_head->next = oldhead;
        }
    }

    void pop() {
        if (m_head != nullptr) {
            Node *p = m_head;
            m_head = p->next;
            delete p;
        }
    }

    int top() {
        return m_head->data;
    }

    int getMin() {
        return m_head->min;
    }
};

#endif // MINSTACK_H
