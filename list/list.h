#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
Node* createNode(int data);
void insertFront(Node** head, int data);
void insertEnd(Node** head, int data);
void deleteNode(Node** head, int key);
void printList(Node* head);

#endif
