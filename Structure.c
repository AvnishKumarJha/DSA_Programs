// Write a Program to define structure Book with data member Bookid Title and Price  get value  for a book  and display it.

#include <stdio.h>
#include <stdlib.h>

struct Book
{
    int book_id;
    char title[20];
    float price;
};

int main()
{
    struct Book b1;
    printf("Enter book details \n");
    scanf("%d %s %f",&b1.book_id,&b1.title,&b1.price);

    printf("BookId = %d\n",b1.book_id);
    printf("Title = %s\n",b1.title);
    printf("Price = %f\n",b1.price);


return 0;
}