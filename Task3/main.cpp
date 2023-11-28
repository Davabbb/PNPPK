#include <iostream>
#include "CppUTest/CommandLineTestRunner.h"
#include "main.h"



//template <class T>
//void List<T>::deleteElem(List<T>*& head) {
//    List<T>* current = head;
//    List<T>* previous = nullptr;
//    int count = 1;
//
//    while (current != nullptr) {
//        if (count % numDelete == 0) {
//            List<T>* temp = current;
//
//            if (previous != nullptr)
//                previous->next = current->next;
//            else
//                head = current->next;
//
//            current = current->next;
//            delete temp;
//        } else {
//            previous = current;
//            current = current->next;
//        }
//        ++count;
//    }
//}


int main(int argc, char** argv) {
    return CommandLineTestRunner::RunAllTests(argc, argv);
}
