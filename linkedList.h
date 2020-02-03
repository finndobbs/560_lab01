#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <string>

class LinkedList{
public:
    LinkedList();
    ~LinkedList();

    void IsEmpty();
    void Length();
    bool Insert(int x);
    void Delete(int x);
    void DeleteDuplicates();
    int  Find(int x);
    int  FindNext(int x);
    std::string Print();
    std::string ReverseList();
    std::string PrintAt(int x);
    void Exit();

    bool Insert_init(int x);
    void PrintList();
    std::string printHelper(Node *node);

private: 
    Node * front;
    Node * back;
    int size;
};
#endif
