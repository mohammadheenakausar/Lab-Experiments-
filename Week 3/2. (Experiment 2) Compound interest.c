#include <stdio.h>
#include <math.h>
void main()
{
float p, r, t, amount, ci;
printf("\n Enter the principal amount, rate of interest and time period in years:");
scanf("%f%f%f",&p,&r,&t);
amount=p*pow(1+r/100,t);
ci=amount-p;
printf("\n The compound interest is %.2f", ci);
}