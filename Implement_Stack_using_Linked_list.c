
// C Program to Implement a Stack using Linked List

// Write a C Code for Linked List implementation of stack with push,pop and display functions.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * top, *top1, *temp;

void push(int data);
void pop();
void display();

int count = 0;

void main()
{
    int no, ch, e;

    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Dipslay");

    

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        
        default:
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}

//  Push data into stack 
void push(int data)
{
    if (top == NULL)
    {
        top = (struct node *)malloc(1 * sizeof(struct node));
        top->next = NULL;
        top->data = data;
    }
    else
    {
        temp = (struct node *)malloc(1 * sizeof(struct node));
        temp->next = top;
        temp->data = data;
        top = temp;
    }
    count++;
}

//  Display stack elements 
void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->data);
        top1 = top1->next;
    }
}

//  Pop Operation on stack 
void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->next;
    printf("\n Popped value : %d", top->data);
    free(top);
    top = top1;
    count--;
}

