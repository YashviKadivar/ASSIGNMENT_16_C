/* Write a program in C to find the sum of left diagonals of a matrix.  */

#include<stdio.h>

int main()
{
  int a[3][3],i,j,sum=0;

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
          if(i+j==2)
          {
              sum=sum+a[i][j];
          }
      }
  }

  printf("\n %d",sum);

  return 0;
}
