#include<stdio.h>
void main()
{
    int a,b=1,i;
    printf("enter the value:");
    scanf("%d",&a);
    for(i=1;i<=a;a--)
    {
        b=b*a;
    }
    printf("factorial:%d",b);
}
