#include <iostream>
#include "list.h"

using namespace std;

// Функція створення нового елемента двоспрямованого списку
DNode* createDNode(char data) {
    DNode* newNode = new DNode;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// Функція додавання елемента в кінець двоспрямованого списку
void insertAtEnd(DNode*& head, char data) {
    DNode* newNode = createDNode(data);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        DNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Функція виведення двоспрямованого списку
void printDList(DNode* head) {
    DNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Функція створення нового елемента односпрямованого списку
SNode* createSNode(unsigned int data) {
    SNode* newNode = new SNode;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Функція додавання елемента на початок односпрямованого списку
void insertAtBeginning(SNode*& head, unsigned int data) {
    SNode* newNode = createSNode(data);
    newNode->next = head;
    head = newNode;
}

// Функція виведення односпрямованого списку
void printSList(SNode* head) {
    SNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Головна функція
int main() {
    // Робота з двоспрямованим списком (char)
    DNode* dList = nullptr;
    insertAtEnd(dList, 'A');
    insertAtEnd(dList, 'B');
    insertAtEnd(dList, 'C');
    cout << "Bidirectional list (char): ";
    printDList(dList);

    // Робота з односпрямованим списком (unsigned int)
    SNode* sList = nullptr;
    insertAtBeginning(sList, 10);
    insertAtBeginning(sList, 20);
    insertAtBeginning(sList, 30);
    cout << "One-way list (unsigned int): ";
    printSList(sList);

    return 0;
}
