#include<stdio.h>
#include<conio.h>
int fun1(); /* if we forget to mention this line it is the causes for implicit diclaration */
void main()
{
    int value1,value2;
    printf("Enter the two value :");
    scanf("%d %d",&value1,&value2);
    fun1(value1,value2);
}
int fun1(int x ,int y)
{
    int sum= x+y;
    printf("This is the %d",sum);
    return 0;
}

// using return

#include<stdio.h>
#include<conio.h>
int fun1(); 
void main()
{
    int val1,val2,holder;
    printf("Enter the two value :");
    scanf("%d %d",&val1,&val2);
    holder=fun1(val1,val2);
    printf("This is the %d",holder);

}
int fun1(int x ,int y)
{
    int sum= x+y;
    return sum;
}
 
