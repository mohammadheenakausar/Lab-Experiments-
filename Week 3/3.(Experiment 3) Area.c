#include <stdio.h>
#include <math.h>
void main()
{
float a, b, c, s, area;
printf("\n Enter the lengths of sides of the triangle:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area= sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n The area of the triangle is %.2f", area);
}