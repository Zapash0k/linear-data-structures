#ifndef LIST_H
#define LIST_H

// Структура для елемента двоспрямованого списку (char)
struct DNode {
    char data;
    DNode* prev;
    DNode* next;
};

// Структура для елемента односпрямованого списку (unsigned int)
struct SNode {
    unsigned int data;
    SNode* next;
};

// Оголошення функцій для двоспрямованого списку
DNode* createDNode(char data);
void insertAtEnd(DNode*& head, char data);
void printDList(DNode* head);

// Оголошення функцій для односпрямованого списку
SNode* createSNode(unsigned int data);
void insertAtBeginning(SNode*& head, unsigned int data);
void printSList(SNode* head);

// Inline-функція для перевірки на рівність нулю вказівника
inline bool isNull(void* ptr) {
    return ptr == nullptr;
}

#endif
