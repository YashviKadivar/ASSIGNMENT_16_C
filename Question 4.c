/* Write a program in C to find the sum of right diagonals of a matrix. */

#include<stdio.h>

int main()
{
    int a[3][3],sum=0,i,j;

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
            if(j==i)
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf("\n %d",sum);
}
