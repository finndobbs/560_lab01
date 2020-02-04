#include <string>
#include <iostream>
#include "linkedList.h"
#include "node.h"

int main(std::string file){
    LinkedList *list = new LinkedList();
    list->Insert_init(10);
    list->Insert_init(20);
    list->Insert_init(20);
    list->Insert_init(20);
    list->Insert_init(30);
    list->Insert_init(40);
    list->Insert_init(40);
    list->Insert_init(40);
    list->Insert(50);

    list->Print();
    std::cout << std::endl;
    std::cout << list->Length() << std::endl;

    list->Delete(40);

    list->Print();
    std::cout << std::endl;
    std::cout << list->Length() << std::endl;

    std::cout << list->Find(20) << std::endl;
    std::cout << list->Find(90) << std::endl;
    LinkedList *no_dup = list->DeleteDuplicates();
    no_dup->Print();

    list->FindNext(20);
    list->FindNext(30);

}
