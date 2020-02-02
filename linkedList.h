#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

class LinkedList{
public:
    LinkedList();
    ~LinkedList();

    void IsEmpty();
    void Length();
    void Insert(int x);
    void Delete(int x);
    void DeleteDuplicates();
    int  Find(int x);
    int  FindNext(int x);
    std::string Print();
    std::string ReverseList();
    std::string PrintAt(int x);
    void Exit();

private: 
    Node* front;
    int size;
};
#endif
