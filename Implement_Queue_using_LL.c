// Implementation of queue using linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * front = NULL;
struct node * rear = NULL;

void enqueue(int x)
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if (newnode==NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        newnode->data=x;
        newnode->next=NULL;
    }
    if (front==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node * temp;
    temp=front;
    if (front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue element =%d",front->data);
        front=front->next;
        free(temp);
    }
    
}



int main()
{
    
return 0;
}