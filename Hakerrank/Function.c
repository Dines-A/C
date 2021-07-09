#include<stdio.h>
int max_of_four1(int a, int b);
int max_of_four2( int c, int d);
int main()
{
    int a,b,c,d,four1,four2;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    four1=max_of_four1(a,b);
    four2=max_of_four2(c,d);

    if(four1>four2)
    {
        printf("%d",four1);
    }
    else
    {
        printf("%d",four2);
    }
    return 0;

}
int max_of_four1(int a, int b)
{
        if(a>b)
    {
        return a; 
    }
    else
    {
        return b;
    }
}
int max_of_four2(int c, int d)
{
        if(c>d)
    {
        return c; 
    }
    else
    {
        return d;
    }
}
