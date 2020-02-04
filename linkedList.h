#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <string>

class LinkedList{
public:
    LinkedList();
    ~LinkedList();

    bool IsEmpty();
    int  Length();
    bool Insert(int x);
    void Delete(int x);
    LinkedList DeleteDuplicates();
    bool Find(int x);
    void FindNext(int x);
    void Print();
    void ReverseList();
    void PrintAt(int x);
    void Exit();

    bool Insert_init(int x);
    std::string printHelper(Node *node);

private: 
    Node * front;
    Node * back;
    int size;
};
#endif
