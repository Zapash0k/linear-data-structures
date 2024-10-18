#ifndef LIST_H
#define LIST_H

// ��������� ��� �������� ��������������� ������ (char)
struct DNode {
    char data;
    DNode* prev;
    DNode* next;
};

// ��������� ��� �������� ���������������� ������ (unsigned int)
struct SNode {
    unsigned int data;
    SNode* next;
};

// ���������� ������� ��� ��������������� ������
DNode* createDNode(char data);
void insertAtEnd(DNode*& head, char data);
void printDList(DNode* head);

// ���������� ������� ��� ���������������� ������
SNode* createSNode(unsigned int data);
void insertAtBeginning(SNode*& head, unsigned int data);
void printSList(SNode* head);

// Inline-������� ��� �������� �� ������ ���� ���������
inline bool isNull(void* ptr) {
    return ptr == nullptr;
}

#endif
