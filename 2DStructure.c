#include<stdio.h>
#include<math.h>
void main()
{
    float value;
    struct point
    {
        int x,y;  
    };
    struct line
    {
        struct point p1;
        struct point p2;
    };
    struct line l;

    printf("Enter you x1,y1 value : ");
    scanf("%d %d",&l.p1.x,&l.p1.y);

    printf("Enter you x2,y2 value : ");
    scanf("%d %d",&l.p2.x,&l.p2.y);
   
    value=sqrt(pow((l.p2.x -l.p1.x),2)+pow((l.p2.y-l.p2.y),2));
    printf("The value is : %f\n",value);
}