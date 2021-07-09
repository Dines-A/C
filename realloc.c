#include<stdio.h>
#include<stdlib.h>
void main()
{
    /* not a correct concept */
    int *ptr ,*ptr1,size,size2,i;
    printf("Enter the heap size : ");
    scanf("%d",&size);
    ptr = (int *)malloc(size*sizeof(int));
    ptr1 = (int *)realloc(ptr,size2 * sizeof(int));
    printf("Memery created succesfully:)D\n");
    for(i=1;i<=size;i++)
    {
        printf("Enter your value [%d] : ",i);
        scanf("%d",ptr1+i);
    }

    {
        for(i=1;i<=size;i++) 
    
       printf("The value [%d]:%d\n",i,*(ptr1+i));
 
    }
       printf("The value : %d  \n",ptr1);
   
  
    
}