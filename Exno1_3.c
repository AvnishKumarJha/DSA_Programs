// C Program to find the sum of all the elements of 2*3 matrix.


#include<stdio.h>
void main()
{
    int i,j, a[3][3], b[3][3], sum[3][3];
    printf("Enter the elements of first matrix\n");
    for ( i = 0; i < 3; i++)
    for(j=0; j<3; j++)
    scanf("%d",& a[i][j]);
    printf("Enter the elements of second matrix\n");
    for(i=0; i<3; i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    printf("sum of entered matrices:-\n");
    for ( i = 0; i < 3; i++)
    {
        for (j=0 ; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");    
    }
}