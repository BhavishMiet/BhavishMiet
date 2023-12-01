#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(c<a||c<b)
    {
        if(a>b)
        printf("The Greatest Number is : %d",a);
        else 
        printf("The Greatest Number is : %d",b);
    }
    else
    {
        printf("The Greatest Number is : %d",c);
    }
}                                                                                                                                       