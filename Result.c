#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter you marks of English");
    scanf("%d",&a);
    printf("Enter you marks of Hindi");
    scanf("%d",&b);
    printf("Enter you marks of Maths");
    scanf("%d",&c);
    printf("Enter you marks of Science");
    scanf("%d",&d);
    printf("Enter you marks of Computer");
    scanf("%d",&e);
    float avg;
    avg=(a+b+c+d+e)/5;
    if(avg<=100&&avg>=90)
    {
        printf("Your Grade is A");
    }
    else if(avg<=90&&avg>=80)
    {
        printf("Your Grade is B");
    }
    else if(avg<=80&&avg>=70)
    {
        printf("Your Grade is C");
    }
    else if(avg<=70&&avg>=60)
    {
        printf("Your Grade is D");
    }
    else if(avg<50)
    {
        printf("FAIL");
    }
}