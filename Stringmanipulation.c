#include<stdio.h>
void main()
{
    char name[5]="Zoom";
    printf("%s\n",name);
    name[1]='*';/* char accept '' only */
    printf("%s\n",name);
}