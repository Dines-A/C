#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int in,im,ia,is;
    float fn,fm,fa,fs;
    scanf("%d %d",&in,&im);
    ia=in+im;
    is=in-im;
    scanf("%f %f",&fn,&fm);
    fa=fn+fm;
    fs=fn-fm;
    printf("%d\t%d\n",ia,is);
    printf("%.1f\t%.1f",fa,fs);
    return 0;
}