// Write a student data info into a file using structure.

// program to store student info in file using structure.

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[20],address[50];
}s;

int main()
{
    FILE *fp;
    int rno;
    char name[20],saddress[50];

    if ((fp=fopen("Stud info.txt","wt"))==NULL)
    {
        printf("Error in opening file\n");
    }
    else
    {
        printf("Enter rollno, name & address of student\n");
    }
    scanf("%d\n %s\n %s\n",&s.rollno,s.name,s.address);

    fprintf(fp,"\n %d \n %s \n  %s",s.rollno,s.name,s.address);
    printf("Data Stored File \n");
    fscanf(fp,"%d %s %s ",&rno,name,saddress);
    printf("Roll.no=%d\nName=%s\nAddress=%s",rno,name,saddress);
    fclose(fp);
    
    
return 0;
}