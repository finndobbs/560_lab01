#include "linkedList.h"

#include <iostream>
#include <string>

LinkedList::LinkedList(){ 
    Node * front = NULL;
    Node * back  = NULL;

    int size = 0;
}

LinkedList::~LinkedList(){
    Node * temp1 = head;

    while (temp1->GetNext() != NULL){
        temp2 = temp1->GetNext();
        delete temp1;
        temp1 = temp2;
    }
    
}




bool LinkedList::Insert_init(int x){
    /* insert at back */
    if (size == 0){
        this->front = new Node(x, NULL);
        this->back = this->front;
        size += 1;
        return true;
    }else{
        Node * temp = new Node(x, NULL);
        this->back->AddNext(temp);
        this->back = temp;
        size += 1;
        return true;
    }
    return false;
}

void LinkedList::PrintList(){
   std::cout << printHelper(this->front); 
}

std::string LinkedList::printHelper(Node *node){
    std::string ret_string = "";

    if (node->GetNext() == NULL){
        ret_string += std::to_string(node->GetValue());
        return ret_string;
    } else{
        ret_string += std::to_string(node->GetValue()) + ", ";
        ret_string += printHelper(node->GetNext());
        return ret_string;
    }
}
