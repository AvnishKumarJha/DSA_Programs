// Program of binary search.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int flag = 0, a[20], i, n, key, pos, start, end, mid;
    printf("enter array size ");
    scanf("%d", &n);
    printf("Enter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter key to be searched");
    scanf("%d", &key);
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == a[mid])
        {
            pos = mid;
            flag = 1;
            break;
        }
        else if (key < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (flag==1)
    {
        printf("Key found at %d",pos);
    }
    else
    {
        printf("Key not found");
    }

    return 0;
}