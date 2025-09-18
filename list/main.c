#include <stdio.h>
#include "list.h"

int main() {
    Node* head = NULL;

    insertFront(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Initial list: ");
    printList(head);

    deleteNode(&head, 20);

    printf("After deleting 20: ");
    printList(head);

    return 0;
}
