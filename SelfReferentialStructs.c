#include <stdio.h>
#include <stdlib.h>
// This code demonstrates the use of self-referential structures in C, which are commonly used to create linked lists and other dynamic data structures.
// The Node structure contains a pointer to another Node, allowing us to link multiple nodes together.

typedef struct Node
{
    int data;
    struct Node *next; // A pointer to the next node in the linked list, allowing us to create a self-referential structure

} Node;

Node *create_node(int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node)); // Dynamically allocate memory for a new node
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }
    new_node->data = data; // Set the data for the new node
    new_node->next = NULL; // Initialize the next pointer to NULL
    return new_node;       // Return the pointer to the newly created node
}

void print_list(Node *head)
{
    Node *current = head; // Start from the head of the list
    while (current != NULL)
    {                                    // Traverse the list until we reach the end
        printf("%d -> ", current->data); // Print the data of the current node
        current = current->next;         // Move to the next node
    }
    printf("NULL\n");
}

void free_list(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        Node *temp = current;    // Store the current node in a temporary variable
        current = current->next; // Move to the next node
        free(temp);              // Free the memory allocated for the current node
    }
}

int main()
{
    Node *head = create_node(10);       // Create the head of the linked list
    head->next = create_node(20);       // Create the second node and link it to the head
    head->next->next = create_node(30); // Create the third node and link it to the second node

    print_list(head); // Print the linked list
    free_list(head);  // Free the memory allocated for the linked list

    return 0;
}