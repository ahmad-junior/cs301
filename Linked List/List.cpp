#include <stdlib.h>
#include "Node.cpp"

class List {
private:
    Node *head;
    Node *tail;
    Node *current;
    int size;

public:
    List();
    void add(int object);
    int get();
    bool next();
    void length();

    friend void traverse(List *list);
    friend List addNodes();
};

List::List() {
    head = new Node();
    head->setNext(NULL);
    tail = NULL;
    current = NULL;
    size = 0;
}

void List::add(int object) {
    // Create a new node and store object in it
    Node *node = new Node();
    node->setObject(object);

    // Set head, tail according to the current condition
    if (current != NULL) {
        node->setNext(current->getNext());
        current->setNext(node);
    } else {
        node->setNext(NULL);
        head->setNext(node);
    }

    // Set tail and current
    tail = node;
    current = node;
    size++;
}

int List::get() {
    if (current != NULL) {
        return current->getObject();
    } else {
        return -1;
    }
}

bool List::next() {
    if (current != NULL) {
        current = current->getNext();
        return true;
    } else {
        return false;
    }
}

void List::length() {
    std::cout << "Size of the list is: " << size << std::endl;
}

// Friend Functions
void traverse(List *list) {
    Node *node = list->head->getNext();
    while (node != NULL) {
        std::cout << node->getObject() << std::endl;
        node = node->getNext();
    }
}

List addNodes() {
    List list;
    list.add(10);
    list.add(20);
    list.add(5);
    list.add(40);
    list.add(50);
    return list;
}