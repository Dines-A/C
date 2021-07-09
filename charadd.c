#include<stdio.h>
void main()
{
    char char1='c';
    char *ptr=&char1;
    printf("This is my addresss :%d\n",char1);
    printf("This is my addresss :%d\n",ptr);
    printf("This is my addresss :%d\n",&char1);
    printf("This is my addresss :%d\n",&ptr);
}