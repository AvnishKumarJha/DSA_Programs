// C PROGRAM TO PRINT THE LARGEST ELEMENT IN AN ARRAY.

#include <stdio.h>

int returnmax(int array[], int n)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    returnmax;
}

int main()
{
    int arr[] = {1, 12, 3, 5455, 5, 67, 654};
    int max = returnmax(arr, 7);
    printf("The maximum element in this array is :- %d\n", max);
return 0;
}
