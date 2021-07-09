#include<stdio.h>
void main()
{
    int size;
    int i=1;
    printf("Enter the size :");
    scanf("%d",&size);
    int array[size];
    for(i=1;i<=size;i++)
    {
             printf("Enter the value:");
            scanf("%d",&array[i]);
    }
    
    for(i=1;i<=size;i++)
    {
            printf("%d\n",array[i]);
    }

}
