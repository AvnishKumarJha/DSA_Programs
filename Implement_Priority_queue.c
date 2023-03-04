// Implement a priority queue & perform different operations.

#include <stdio.h>
#define max 5

void insert_by_priority(int x);
void delete_by_priority(int x);
void create();
void check(int x);
void display();

int pqueue[max];
int front, rear;

void main()
{
    int choice, value;
    do
    {
        printf("\nMenu\n1. Insert \n2. Delete \n3. Display \n4. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);
        create();
        switch (choice)
        {
        case 1:
            printf("Data to be inserted- ");
            scanf("%d", &value);
            insert_by_priority(value);
            break;

        case 2:
            printf("Enter the value to be deleted");
            scanf("%d", &value);
            delete_by_priority(value);
            break;

        case 3:
            display();
            break;

        default:
            break;
        }

    } while (choice != 4);
}

void create()
{
    front = rear = -1;
}

void insert_by_priority(int data)
{
    if (rear >= max - 1)
    {
        printf("Queue is full");
    }
    else
    {
        if ((front == -1) && (rear == -1))
        {
            front++;
            rear++;
            pqueue[rear] = data;
        }
        else
        {
            check(data);
        }
        rear++;
    }
}

void check(int x)
{
    int i,j;
    for (int i = 0; i <= rear; i++)
    {
        if (x >= pqueue[i])
        {
            for (int i = rear + i; i > x; i--)
            {
                pqueue[j] = pqueue[j - 1];
            }
            pqueue[i] = x;
        }
    }
    pqueue[i] = x;
}

void delete_by_priority(int x)
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }
    else
    {
        for (int i = 0; i <= rear; i++)
        {
            if (x == pqueue[i])
            {
                for (int i = 0; i < rear; i++)
                {
                    pqueue[i] = pqueue[i + 1];
                }
            }
            pqueue[i] = -99;
            rear--;
            if (rear == -1)
            {
                front = -1;
            }
        }
    }
}

void display()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }
    else
    {
        while (front <= rear)
        {
            printf("%d", pqueue[front]);
            front++;
        }
        front = 0;
    }
}
