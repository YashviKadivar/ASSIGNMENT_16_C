
/* Write a program in C to find the transpose of a given matrix.    */

#include<stdio.h>

int main()
{
    int a[2][2],tran[2][2],i,j;

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("\n Enter a value of a->");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            tran[j][i]=a[i][j];
        }
    }

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("\n %d",tran[i][j]);

        }
    }


}
