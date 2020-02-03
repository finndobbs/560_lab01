#include "node.h"

Node::Node(int value, Node* next){
    this->value = value;
    this->next = next;
}

Node::~Node(){
    delete this->next;
}

void Node::AddNext(Node* next){
    delete this->next;
    this->next = next;
}

Node* Node::GetNext(){
    return this->next;
}

int Node::GetValue(){
    return this->value;
}
