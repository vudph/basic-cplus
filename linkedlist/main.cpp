#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList *ll = new LinkedList();
    ll->insertFirst(3);
    ll->insertLast(4);
    ll->insertFirst(2);
    ll->insertFirst(1);
    ll->insertLast(5);
    ll->insertLast(5);
    ll->insertLast(6);
    ll->insertLast(7);
    ll->insertLast(8);

    ll->print();
    cout << "\nLinkedList size: " << ll->size() << endl;

    ll->deleteLast();
    ll->deleteFirst();

    ll->print();
    cout << "\nLinkedList size: " << ll->size() << endl;

    ll->insertFirst(5);
    ll->insertFirst(5);
    ll->insertLast(5);
    ll->insertLast(5);

    ll->print();
    cout << "\nLinkedList size: " << ll->size() << endl;

    ll->deleteNode(5);

    ll->print();
    cout << "\nLinkedList size: " << ll->size() << endl;

    LinkedList *other = ll->deepCopy();
    other->deleteLast();

    cout << "\nOld linkedList: ";
    ll->print();

    cout << "\nNew linkedList: ";
    other->deleteFirst();
    other->print();

    cout << endl;

    delete ll;
    delete other;
    return 0;
}
