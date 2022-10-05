// pointer to Structure 

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[20];
};


int main()
{
    struct student s1,*ptr;
    printf("Enter Student details\n");
    scanf("%d %s",&s1.rollno,s1.name);
    ptr=&s1;
    printf("s1.rollno=%d s1.name=%s",s1.rollno,s1.name);
    printf("ptr->rollno=%d,ptr->name=%s",ptr->rollno,*ptr->name);

return 0;
}