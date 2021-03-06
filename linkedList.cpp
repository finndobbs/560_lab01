#include "linkedList.h"

#include <iostream>
#include <string>

LinkedList::LinkedList(){ 
    Node * front = NULL;
    Node * back  = NULL;

    int size = 0;
}

LinkedList::~LinkedList(){
    Node * temp1 = front;
    Node * temp2;

    while (temp1->GetNext() != NULL){
        temp2 = temp1->GetNext();
        delete temp1;
        temp1 = temp2;
    }
    
}

//////////////////////
//   Menu Options   //
//////////////////////

bool LinkedList::IsEmpty(){
    if (this->size == 0 || this->front == NULL){
        return true;
    }else{
        return false;
    }
}

int  LinkedList::Length(){
    return this->size;
}

bool LinkedList::Insert(int x){
    if (size == 0){
        this->front = new Node(x, NULL);
        this->back = this->front;
        size += 1;
        return true;
    }else{
        Node * temp = new Node(x, NULL);
        temp->AddNext(this->front);
        this->front = temp;
        size += 1;
        return true;
    }
    return false;
}

void LinkedList::Delete(int x){
    Node *last_occurence = NULL;
    Node *before_last_occurence = NULL;
    Node *temp = this->front;
    Node *before_temp = NULL;

    while (temp->GetNext() != NULL){
        if(temp->GetNext()->GetValue() == x){
            last_occurence = temp->GetNext();
            before_last_occurence = temp;
        }
        temp = temp->GetNext();
    }
    if (last_occurence != NULL){
        before_last_occurence->AddNext(last_occurence->GetNext());
        this->size -= 1;
    }
}

LinkedList* LinkedList::DeleteDuplicates(){
    LinkedList *newList = new LinkedList();

    Node *temp = this->front;

    while (temp != NULL){
        std::cout << temp->GetValue() << std::endl;
        if (!newList->Find(temp->GetValue())){
            std::cout << "new " << temp->GetValue() << std::endl;
            newList->Insert_init(temp->GetValue());
        }
        temp = temp->GetNext();
    }
    return newList;
}
bool LinkedList::Find(int x){
    Node *temp = this->front;
    if (this->size){
        while (true){
            if (temp->GetValue() == x){
                return true;
            } else if (temp->GetNext() == NULL){
                return false;
            }
            temp = temp->GetNext();
        }
    } else {
        return false;
    }
}

void LinkedList::FindNext(int x){

    if (this->Find(x)){
        Node *temp = this->front;
        while (temp->GetNext() != NULL){
            if (temp->GetNext()->GetValue() == x && temp->GetNext()->GetNext() != NULL){
                std::cout << temp->GetNext()->GetNext()->GetValue() << std::endl;
                break;
            }
            temp = temp->GetNext();
        }
    }else {
        std::cout << "None";
    }
}
void LinkedList::ReverseList(){}
void LinkedList::PrintAt(int x){}
void LinkedList::Exit(){}
void LinkedList::Print(){
   std::cout << printHelper(this->front) << std::endl; 
}
//////////////////////
// Non-user Methods //
//////////////////////

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
