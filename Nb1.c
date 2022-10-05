// Write a Program using to read marks of 10 student and display them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10],i;
    printf("Enter marks:\n");
    for ( i = 1; i <=10; i++)
    {
        scanf("%d",&marks[i]);
    }
    for ( i = 1; i <=10; i++)
    {
        printf("Marks of %d Student is %d\n",i,marks[i]);
    }
return 0;
}