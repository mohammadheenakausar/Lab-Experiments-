#include <stdio.h>
void main()
{
float a, b;
int choice;
printf("\n Enter 2 numbers:");
scanf("%f%f",&a,&b);
printf("\n 1. Addition");
printf("\n 2. Subtraction");
printf("\n 3. Multiplication");
printf("\n 4. Division");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("\nResult=%f",a+b);
break;
case 2:
printf("\nResult=%f",a-b);
break;
case 3:
printf("\nResult=%f",a*b);
break;
case 4:
if(b==0)
printf("\nDivision by 0 is not possible");
else
printf("\nResult=%f",a/b);
break;
default:
printf("\n Invalid option");
}
}