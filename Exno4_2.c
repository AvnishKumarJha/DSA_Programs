// Implement Stack Using Linked List.

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *head;
void push()
{
    int num;
    struct stack *ptr;
    ptr = (struct stack *)malloc(sizeof(struct stack));

    if (ptr == NULL)
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Enter the value\n");
        scanf("%d", &num);
        if (head == NULL)
        {
            ptr->data = num;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->data = num;
            ptr->next = head;
            head = ptr;
        }
        printf("Item Pushed");
    }
}

void pop()
{
    int item;
    struct stack *ptr;
    if (head == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        item = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("item poped\n");
    }
}

void display()
{
    struct stack *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing stack elements \n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice = 0;
    do
    {
        printf("\n\nChoose one from the below options...\n");
        printf("\n1.Push\n2.pop\n3.Show\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            break;
        }
    } while (choice!=4);

    return 0;
}