#include<stdio.h>
void main()
{
int a, b, c, sum;
float avg;
printf("\n Enter the three integers:");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("The sum of the three numbers is %d",sum);
avg=sum/3.0;
printf("\n The average of the given numbers is %.2f",avg);
}