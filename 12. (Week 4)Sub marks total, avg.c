#include<stdio.h>
void main()
{
int a, b, c, d, e, total;
float avg;
printf("\n Enter the 5 subjects marks:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
printf("\n The Total of 5 subjects marks is %d", total);
avg=total/5.0;
printf("\n The Average of 5 subjects marks is %f", avg);
}