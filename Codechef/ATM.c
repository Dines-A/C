#include<stdio.h>
int main()
{
    int x;
    float charge=0.50;
    double y,o;
    scanf("%d",&x);

    scanf("%lf",&y);
    if(x%5==0)
    {

        if( 0 < x <= 2000 && 0<= y <= 2000 )
        {
        if(x<y)
        {
            o=y-x-charge;
            printf("%.2f",o);
        }
        else{
            printf("%.2f",y);
        }
        }
    }
    else{
        printf("%.2f",y);
    }
    return 0;
}