// Write a program to define structure roll call with datamember , rollno and name except value for student and display it.

#include <stdio.h>
#include <stdlib.h>

struct rollcall
{
    int roll_no;
    char name[20];
};

int main()
{
    struct rollcall r[60];

    printf("Enter details \n");
    for (int  i = 0; i < 60; i++)
    {
        scanf("%d",&r[i].roll_no);
        scanf("%s",&r[i].name);
    }
    for (int i = 0; i < 60; i++)
    {
        printf("InRollno=%d,fname=%s",r[i].roll_no,r[i].name);
    }
    
    
return 0;
}