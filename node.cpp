#include "node.h"

Node::Node(int value, Node* next){
    this->value = value;
    this->next = next;
}

Node::~Node(){
    delete this->next;
}

Node::addNext(Node* next){
    delete this->next;
    this->next = next;
}

