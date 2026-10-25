#include <stdio.h>
#include <math.h>
void main()
{
int a, b, c, d, max, min;
printf("Enter the 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=min=a;
if(b>max)
max=b;
else
min=b;
if(c>max)
max=c;
else if (c<min)
min=c;
if(d>max)
max=d;
else if (d<min)
min=d;
printf("\n Maximum=%d",max);
printf("\n Minimum=%d",min);
}