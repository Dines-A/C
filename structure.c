#include<stdio.h>
void main()
{
    struct car
    {
        int no;
        char name[50];
    };
    struct car car1 = { 1,"Honda"}; 
   struct car car2 = { 2,"Hundai"}; 
    struct car car3 = { 3,"suzuki"}; 
    struct car car4 = { 4,"tata"}; 
   struct car car5 = { 5,"BMW"};
    printf("NO : %d\n",car1.no); 
    printf("Name : %s\n",car1.name); 
    printf("NO : %d\n",car2.no); 
    printf("Name : %s\n",car2.name); 
    printf("NO : %d\n",car3.no); 
    printf("Name : %s\n",car3.name); 
    printf("NO : %d\n",car4.no); 
    printf("Name : %s\n",car4.name); 
    car5.no = 6;
    car5.name[]="Audi";
    printf("NO : %d\n",car5.no); 
    printf("Name : %s\n",car5.name); 
}