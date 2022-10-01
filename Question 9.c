/* Write a program in C to accept a matrix and determine whether it is a sparse matrix */

#include<stdio.h>

int main()
{
    int a[3][3],i,j,count=0;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\n Enter a Value->");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==0)
            {
               count++;
            }
        }
    }

    if(count>4)
        printf("\n the given matrix is sparse matrix");
    else
        printf("\n the given matrix is not a sparse matrix");

    printf("\n numbers of zeros in the matrix =%d",count);
}
