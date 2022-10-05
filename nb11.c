// Implementation of Hash Table.

#include <stdio.h>
#include <stdlib.h>
#define size 8

int arr[size];
void init()
{
    for (int  i = 0; i < size; i++)
    {
        arr[i]=-1;
    }
}

void insert(int value)
{
    int index = value %size;
    if (arr[index]==-1)
    {
        arr[index]=value;
        printf("Element inserted at %d",index);
    }
    else
    {
        printf("Can't insert element");
    }
}

void delete(int value)
{
    int index = value % size;
    if (arr[index]==value)
    {
        arr[index]=-1;
    }
    else
    {
        printf("Can't delete");
    }
}

void search(int value)
{
    int index = value %size;
    if (arr[index]==value)
    {
        printf("Element %d found at %d",value,index);
    }
    else
    {
        printf("element not found");
    }
}

void display()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    init();
    insert(10);
    insert(12);
    insert(13);
    printf("New inserted elements ");
    display();
    delete(12);
    printf("Contents after deletion");
    display();
    search(10);
    search(13);

return 0;
}