#include<stdio.h>
void main()
{
    struct mobile
    {
        char brandname[10];
        int prize;
        char color[10];
        
    };
    struct mobile mobile1;
    scanf("%s",&mobile1.brandname);
    scanf("%d",&mobile1.prize);
    scanf("%s",&mobile1.color);
    printf("%s\n",mobile1.brandname);
    printf("%d\n",mobile1.prize);
    printf("%s\n",mobile1.color);
}