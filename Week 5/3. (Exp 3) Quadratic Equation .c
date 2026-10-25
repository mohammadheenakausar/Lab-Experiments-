#include <stdio.h>
#include <math.h>
void main()
{
float a, b, c, d, x1,x2, x;
printf("Enter the coefficients a, b and c:");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if (d>0)
{
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
printf("\n Roots are real and distinct");
printf("\n Root1=%f",x1);
printf("\n Root2=%f",x2);
}
else if (d==0)
{
x=-b/2*a;
printf("\n Roots are real and equal");
printf("\n Root=%f",x);
}
else
printf("\n Roots are imaginary");
}