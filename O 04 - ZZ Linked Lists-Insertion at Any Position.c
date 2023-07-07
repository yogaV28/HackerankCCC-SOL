#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

void insert(struct LinkedList* linked_list, int position, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (position == 0) {
        new_node->next = linked_list->head;
        linked_list->head = new_node;
    } else {
        struct Node* prev_node = linked_list->head;
        for (int i = 0; i < position - 1; i++) {
            prev_node = prev_node->next;
        }
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }
}

void print_list(struct LinkedList* linked_list) {
    if (linked_list->head == NULL) {
        printf("null\n");
    } else {
        struct Node* current = linked_list->head;
        while (current != NULL) {
            printf("%d", current->data);
            current = current->next;
            if (current != NULL) {
                printf("->");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct LinkedList linked_list;
    linked_list.head = NULL;

    for (int i = 0; i < n; i++) {
        int position, data;
        scanf("%d %d", &position, &data);
        insert(&linked_list, position, data);
    }

    print_list(&linked_list);

    return 0;
}
