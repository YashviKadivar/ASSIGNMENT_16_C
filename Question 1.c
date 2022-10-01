/* Write a program to calculate the sum of two matrices each of order 3x3.  */

#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],sum[3][3],i,j;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\n Enter a Value of a->");
            scanf(" %d",&a[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\n Enter a Value of b->");
            scanf(" %d",&b[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\n %d",sum[i][j]);
        }
    }


}


