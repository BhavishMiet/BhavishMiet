#include <stdio.h>
int main() 
{
int a,b,c;
char op;
printf("Enter first number:");
scanf("%d", &a);
printf("Enter an operator (+, -, *, /): ");
scanf(" %c", &op);
printf("Enter second number:");
scanf("%d", &b);
switch(op) 
{
case '+':
c=a+b;
break;
case '-':
c=a-b;
break;
case '*':
c= a*b;
break;
case '/':
if(b==0) {
printf("Error! Division by zero is not allowed.\n");
return 1;
}
c = a / b;
break;
 default:
 printf("Error! Invalid operator.\n");
return 1;
}
printf("The result of the calculation is: %d\n", c);
return 0;
}
