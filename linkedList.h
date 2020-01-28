#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

class LinkedList{
public:
    LinkedList();
    ~LinkedList();

    void IsEmpty();
    void Length();
    void Insert(x);
    void Delete(x);
    void DeleteDuplicates();
    int  Find(x);
    int  FindNext(x);
    std::string Print();
    std::string ReverseList();
    std::string PrintAt(x);
    void Exit();
};
#endif
