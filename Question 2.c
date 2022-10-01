/* Write a program to calculate the product of two matrices each of order 3x3.  */

#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,product=1;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\n Enter a value of a->");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\n Enter a value of b->");
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           product=product * (a[i][j]) * (b[i][j]);
        }
    }

    printf("\n product = %d",product);
}
