#ifndef NODE_H
#define NODE_H

class Node {
public:
    Node(int value);

    ~Node();

private:

    void AddNext(*Node next);

    int value;
    *Node next;


};

#endif
