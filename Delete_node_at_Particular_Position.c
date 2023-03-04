// Simple C Code to delete node at Particular Position.

#include <stdio.h>
#include <stdlib.h>

void insert(int);
void display_List();
void delete (int);

struct node // Structure declaraton
{
    int data;
    struct node *next;        // self referal Pointer
} *head = NULL, *tail = NULL; // Initial value of head and tail Pointer  is  NULL

void delete (int pos)
{
    struct node *temp = head; // Creating a temporary variable Pointing to head
    int i;
    if (pos == 0)
    {
        printf("\nElement deleted is: %d\n", temp->data);
        head = head->next; // Advancing the head Pointer
        temp->next = NULL;
        free(temp); // None is deleted
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        // Now temp Pointer Points to the Previous node of the node to be deleted

        struct node *del = temp->next;
        // del pointer points to the node to be deleted

        temp->next = temp->next->next;
        printf("\nElements deleted is: %d\n", del->data);
        del->next = NULL;
        free(del); // Node is deleted
    }
    printf("\nUpdated Linked List is:\n");
    display_List();

    return;
}

void insert(int value)
{
    struct node *newnode; // Creating a new node
    newnode = (struct node *)malloc(sizeof(struct node));

    // Allocating dynamic memory

    newnode->data = value; // Assigning value to newnode
    newnode->next = NULL;

    if (head == NULL) // Checking if list is empty
    {
        head = newnode;
        tail = newnode;
    }
    else // If not empty then
    {
        tail->next = newnode;
        tail = newnode; // updating the tail node with each insertion
    }
    return;
}

void display_List()
{
    struct node *temp;
    // Creating a temporary Pointer to the structure

    temp = head; // temp points to head;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            printf("%d->NULL", temp->data);
        }
        else
        {
            printf("%d->", temp->data);
        }
        temp = temp->next; // Traversing the List till the end
    }
    printf("\n") ;
    return ;
}

// Driver Code
int main()
{
    insert (10);
    insert (20);
    insert (30);
    insert (40);
    insert (50);
    insert (60);
    printf("\n--Created Linked List---\n");
    display_List();
    printf("\nLinked List after deletion at Position 0");
    delete (0);   // List indexing starts From 0
    printf("\n Linked List after deletion at position 2");
    delete(2);

    return 0;
}