#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,j=1;
    for(i=1;i<=5;i++)
    {
            for(j=1;j<=5;j++)
            {
                if (j==3)
                {
                    continue; /* break */
                }
                printf("The number is :[%d] [%d]\n", i,j);
            }
    }
}