// Implementation of Bubble sort.


#include <stdio.h>
#include <stdlib.h>

void bubblesort(int a[],int n)
{
    int i,j,temp;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1; i++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void display(int a[],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int i,a[10],n;
    printf("Enter array size");
    scanf("%d",&n);
    printf("Enter array elements ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements before sorting");
    display(a,n);
    bubblesort(a,n);
    printf("Array elements after sorting");
    display(a,n);
    
return 0;
}