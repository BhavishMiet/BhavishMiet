#include<stdio.h>
void main()
{
    int x,a,b,ans;
    float divv;
    printf("1. Addition\n2. Subtraction\n3. Multipication\n4. Division\n");
    scanf("%d",&x);
    printf("Enter Two Number:");
    scanf("%d%d",&a,&b);
    switch(x)
    {
        case 1:
        ans=a+b;
        printf("Sum:%d",ans);
        break;
        case 2:
        ans=a-b;
        printf("Sub:%d",ans);
        break;
        case 3:
        ans=a*b;
        printf("Product:%d",ans);
        break;
        case 4:
        if(b==0)
        {
            printf("INFINITY");
        }
        else
        {
        divv=a/b;
        printf("Div:%f",divv);
        }
        break;
        default:
        printf("Enter Correct Value");
    } 
}