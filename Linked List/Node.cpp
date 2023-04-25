class Node {
private:
    int object;
    Node *next;
    Node *previous;

public:
    int getObject();
    void setObject(int object);

    Node *getNext();
    void setNext(Node *next);

    Node *getPrevious();
    void setPrevious(Node *previous);
};

int Node::getObject() {
    return object;
}

void Node::setObject(int object) {
    this->object = object;
}

Node *Node::getNext() {
    return next;
}

void Node::setNext(Node *next) {
    this->next = next;
}

Node *Node::getPrevious() {
    return previous;
}

void Node::setPrevious(Node *previous) {
    this->previous = previous;
}