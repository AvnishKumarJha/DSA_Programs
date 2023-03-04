// Implementation of insertion sort.

#include <stdio.h>
#include <stdlib.h>

void insertionsort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j > 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}

void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

int main()
{
    int i, a[10], n;
    printf("Enter array size");
    scanf("%d", &n);
    printf("Enter array elements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements before sorting");
    display(a, n);
    insertionsort(a, n);
    printf("Array elements after sorting");
    display(a, n);

    return 0;
}
