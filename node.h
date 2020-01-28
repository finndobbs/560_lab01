#ifndef NODE_H
#define NODE_H

class Node {
public:
    Node(int value);

    ~Node();

    void AddNext(Node* next);

private:

    int value;
    Node* next;

};

#endif
