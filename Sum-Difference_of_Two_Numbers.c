#include <stdio.h>
int main()
{
    int a=6,b=4;
    float c=3.0,d=5.8;
    scanf("%d\t%d",&a,&b);
    scanf("%f\t%f",&c,&d);
    printf("%d\t%d\n",a+b,a-b);
    printf("%.1f\t%.1f\n",c+d,c-d);
    return 0;
}