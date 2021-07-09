#include<stdio.h>
void main()
{
    int a=1;
    int *ptr=&a;
    printf("1.%d ==1\n",a);
    printf("2.%d==1024 something\n",ptr);
    printf("3.%d==1028 something\n",ptr+1);
    printf("4.%d==2 something\n",*ptr+1);
    printf("5.%d==1024 something\n",&a);
    printf("6.%d==1\n",*ptr);
    printf("7.%d==1026something\n",&ptr);
    // printf("5.%d==1026something\n",*a); /*  it is error*/
}