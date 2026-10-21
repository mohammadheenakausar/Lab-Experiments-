#include<stdio.h>
void main()
{
float p, r, t, si;
printf("\n Enter the principal amount, rate of interest and time period in years:");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("\n The Simple interest value is %.2f",si);
}