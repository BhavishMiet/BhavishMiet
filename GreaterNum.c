#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("The Greatest Number is : %d",a);
        else
            printf("The Greatest NUmber is : %d",c);
    }
    else
    {
        if(b>c)
        printf("The Greatest Number is : %d",b);
        else
        printf("The Greatest number : %d",c);
    }
}