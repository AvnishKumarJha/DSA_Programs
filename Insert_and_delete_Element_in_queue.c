// Write a c code to insert on element into Queue & to delete an element From Queue.

#include <stdio.h>
#include <stdlib.h>
#define max 10

void enqueue(int x);
void dequeue();
void display();

int queue[max],front,rear;

int main()
{
    int value, choice;
    do
    {
        printf("\nMenu\n 1.insert\n 2.Delete\n 3.Display\n 4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted: \n");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    } while (choice != 4);
    }

    void enqueue(int x)
    {
        if (rear == max - 1)
        {
            printf("Queue is Full\n");
        }
        else
        {
            rear++;
            if (rear == 0)
            {
                front=0;
            }
            queue[rear] = x;
        }
    }

    void dequeue()
    {
        if (front == -1)
        {
            printf("Queue is Empty\n");
        }
        else
        {
            printf("Deleted element = %d\n", queue[front]);
            front++;
        }
    }

    void display()
    {
        if (front == -1)
        {
            printf("Queue is Empty can't display element\n");
        }
        else
        {
            printf("\n\tDisplay queue element :: \n");
            for (int i = front; i <= rear; i++)
            {
                printf("%d\n", queue[i]);
            }
            printf("\n");
        }
    }
