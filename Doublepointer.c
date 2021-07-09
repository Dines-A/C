#include<stdio.h>
void main()
{
    int a=1;
    int *ptr=&a;
    int **dptr=&ptr;
    printf("1.a== :%d\n",a);
    printf("2.&a==%d\n",&a);
    printf("3.ptr==%d\n",ptr);
    printf("4.*ptr==%d\n",*ptr);
    printf("5.dptr==%d\n",dptr);
    printf("6.*dptr==%d\n",*dptr);
    printf("7.**dptr==%d\n",**dptr);
    printf("8.&ptr==%d\n",&ptr);
    printf("9.&dptr==%d\n",&dptr);
}