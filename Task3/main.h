#ifndef MAIN_H
#define MAIN_H

const int numDelete = 5;

template <class T>
struct List {
    List* next;
    T payload;
};

template <class T>
void deleteElem(List<T>*& head) {
    List<T>* current = head;
    List<T>* previous = nullptr;
    int count = 1;

    while (current != nullptr) {
        if (count % numDelete == 0) {
            List<T>* temp = current;

            if (previous != nullptr)
                previous->next = current->next;
            else
                head = current->next;

            current = current->next;
            delete temp;
        } else {
            previous = current;
            current = current->next;
        }
        ++count;
    }
}

template <class T>
void deleteList(List<T>*& head) {
    while (head != nullptr) {
        List<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

#endif
