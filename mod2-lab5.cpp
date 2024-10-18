#include <iostream>
#include "list.h"

using namespace std;

// ������� ��������� ������ �������� ��������������� ������
DNode* createDNode(char data) {
    DNode* newNode = new DNode;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// ������� ��������� �������� � ����� ��������������� ������
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

// ������� ��������� ��������������� ������
void printDList(DNode* head) {
    DNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ������� ��������� ������ �������� ���������������� ������
SNode* createSNode(unsigned int data) {
    SNode* newNode = new SNode;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// ������� ��������� �������� �� ������� ���������������� ������
void insertAtBeginning(SNode*& head, unsigned int data) {
    SNode* newNode = createSNode(data);
    newNode->next = head;
    head = newNode;
}

// ������� ��������� ���������������� ������
void printSList(SNode* head) {
    SNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ������� �������
int main() {
    // ������ � �������������� ������� (char)
    DNode* dList = nullptr;
    insertAtEnd(dList, 'A');
    insertAtEnd(dList, 'B');
    insertAtEnd(dList, 'C');
    cout << "Bidirectional list (char): ";
    printDList(dList);

    // ������ � ��������������� ������� (unsigned int)
    SNode* sList = nullptr;
    insertAtBeginning(sList, 10);
    insertAtBeginning(sList, 20);
    insertAtBeginning(sList, 30);
    cout << "One-way list (unsigned int): ";
    printSList(sList);

    return 0;
}
