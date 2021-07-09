#include<stdio.h>
void main()
{
    int size;
    int i=1,j=1;
    int row,col;
    printf("Enter the row size :");
    scanf("%d",&row);
    printf("Enter the col size :");
    scanf("%d",&col);
    int array[row][col];
    for(i=1;i<=row;i++)
    {
           for(j=1;j<=col;j++)
           {
                 printf("Enter the value [%d][%d]:",i,j);
                scanf("%d",&array[i][j]);
           }
    }
    printf("\n");
    printf("The result is :)D\n\n");
    for(i=1;i<=row;i++)
    {
           for(j=1;j<=col;j++)
           {
               printf("The 2D array is [%d][%d] = %d  \n",i,j,array[i][j]);
           }
           printf("\n");
    }

}
