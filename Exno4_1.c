// Implement a stack using arrays.

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int a[10];
    int top;
} * s;

void push(struct stack *s)
{
    if (s->top == 9)
    {
        printf("Stack is full");
    }
    else
    {
        s->a[s->top++] = 50;
    }
}

void pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d", s->a[s->top]);
        s->top--;
    }
}

void display()
{
    if (s->top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        if (s->top == -1)
        {
            printf("Stack is empty");
        }
        else
        {
            for (int i = 0; i < s->top; i++)
            {
                printf("%d", s->a[i]);
            }
        }
    }
}

void init(struct stack *s)
{
    s->top = -1;
}

void main()
{
    int choice, value;
    do
    {
        printf("1.push\n2.pop\n3.Display\n");
        printf("Enter the choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted");
            scanf("%d", &value);
            push(s);
            break;

        case 2:
            pop(s);
            break;

        case 3:
            display(s);
            break;

        default:
            break;
        }
    } while (choice != 4);
}
