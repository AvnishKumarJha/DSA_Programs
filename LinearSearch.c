// Program for linear / sequential search.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20],n,i,pos,flag=0,key;
    printf("\nEnter Size of array=");
    scanf("%d",&n);
    printf("\nEnter array elements-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter key value to be searched=");
    scanf("%d",&key);
    for ( i = 0; i < n; i++)
    {
        if (key==a[i])
        {
            pos=i;
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("Element found at %",pos);
    }
    else
    {
        printf("Element not found");
    }

return 0;
}