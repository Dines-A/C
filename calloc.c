#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,size,i;
    printf("Enter the heap size : ");
    scanf("%d",&size);
    ptr = (int *)calloc(size,sizeof(int));
    printf("Memery created succesfully:)D\n");
    for(i=1;i<=size-5;i++) /* here also */
    {
        printf("Enter your value [%d] : ",i);
        scanf("%d",ptr+i);
    }

    {
        for(i=1;i<=size+5;i++) /* be carefully 5 here for check 0 value */
    
       printf("The value [%d]:%d\n",i,*(ptr+i));
    /*  
    ptr[i]=>*(ptr+i)
    &ptr[i]=>(ptr+i)
    both are same 
    */  
    }
       printf("The value : %d  \n",ptr);
   
  
    
}