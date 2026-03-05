#include <stdio.h>
#include <stdlib.h>

// Exercise 2: Implement a function to insert a node at a specific position.
// Define a structure for a node in the linked list, which contains an integer data and a pointer to the next node.
// The create_node function allocates memory for a new node, initializes its data and next pointer, and returns a pointer to the new node.
// The insert_at function takes a pointer to the head of the list, the data to be inserted, and the position where the new node should be inserted. It handles insertion at the head and traverses the list to find the correct position for insertion.
//

typedef struct Node
{ // Define the structure for a node in the linked list
    int data;
    struct Node *next; // Pointer to the next node in the list
} Node;

Node *create_node(int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node)); // Allocate memory for a new node
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed \n");
        exit(1);
    }
    new_node->data = data; // Set the data for the new data
    new_node->next = NULL; // Initialize the next pointerr to null
    return new_node;
}

void insert_at(Node **head, int data, int position)
{                                       // Function to insert a node at a specific position
    Node *new_node = create_node(data); // Create a new node with the given data

    // If inserting at the head (position 0)
    if (position == 0)
    {
        new_node->next = *head; // point the new node to the current head
        *head = new_node;       // Update the head to the new data
        return;
    }

    // Traverse to the node just before the desired position
    Node *current = *head; // Start from the head

    for (int i = 0; current != NULL && i < position - 1; i++)
    {
        current = current->next; // Move to the next node
    }

    if (current == NULL)
    {
        printf("Position out of bounds\n");
        free(new_node); // Free the allocated node if the position is invalid
        return;
    }
    // Insert the new node
    new_node->next = current->next; // Point the new node to the next node int the list
    current->next = new_node;       // Point the current node to the new node, completing the insertion
}

void print_list(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    Node *head = NULL; // Initialize the head of the list

    insert_at(&head, 10, 0); // Insert nodes at various positions
    insert_at(&head, 20, 1);
    insert_at(&head, 30, 2);

    printf("Printed List: ");
    print_list(head); // Print the list after insertions

    return 0;
}