// C Program For implementing stack using array.

#include <stdio.h>

void push(char element, char stack[], int *top, int stacksize)
{
    if (*top == -1)
    {
        stack[stacksize - 1] = element;
        *top = stacksize - 1;
    }
    else if (*top == 0)
    {
        printf("The stack is already full\n");
    }
    else
    {
        stack[(*top) - 1] = element;
        (*top)--;
    }
}

void pop(char stack[], int *top, int stacksize)
{
    if (*top == -1)
    {
        printf("The Stack is empty\n");
    }
    else
    {
        printf("Element popped : %c \n", stack[(*top)]);
        // If the element popped was the last element in the stack
        // Then set top to -1 to show that the stack is empty
        if ((*top) == stacksize-1)
            {
                (*top) = -1;
            }
        else
        {
            (*top)++;
        }
    }
}

int main()
{ 
    int stacksize = 4;
    char stack[stacksize];
    // A negative index shows that the stack is empty 
    int top=-1;
    push('a',stack,&top,stacksize);
    printf("Element on top : %c\n",stack[top]);
    push('b',stack,&top,stacksize);
    printf("Element on top:%c\n",stack[top]);
    pop(stack,&top,stacksize);
    printf("Element on top : %c\n",stack[top]);
    pop(stack,&top,stacksize);
    printf("top:%d\n",top);
    pop(stack,&top,stacksize);
    return 0;
}