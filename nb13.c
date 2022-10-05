// Implementation of selection sort.

#include <stdio.h>
#include <stdlib.h>

void selectionsort(int a[], int n)
{
    int i, j, small, temp;
    for (i = 0; i < n; i++)
    {
        small = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[small])
            {
                small = j;
            }
        }

        temp = a[i];
        a[i] = a[small];
        a[small] = temp;
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
    selectionsort(a,n);
    printf("Array elements after sorting");
    display(a,n);
    
return 0;
}
