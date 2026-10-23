#include<stdio.h>
void main()
{
float C, F;
printf("\n Enter the  temperature in Celsius:");
scanf("%f",&C);
F=9/5*C+32;
printf("\n The temperature in Fahrenheit is %f", F);
printf("\n Enter the  temperature in Fahrenheit:");
scanf("%f",&F);
C=5/9*(F-32);
printf("\n The temperature in Celsius is %f", C);
}