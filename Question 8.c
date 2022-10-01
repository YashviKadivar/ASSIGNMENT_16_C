/* Write a program in C to print or display an upper triangular matrix. */

#include<stdio.h>

int main()
{
    int a[3][3],i,j;

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
            if(i<j)
            {
                printf("\n %d",a[i][j]);
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

