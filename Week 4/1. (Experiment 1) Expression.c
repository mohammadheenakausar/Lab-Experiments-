#include <stdio.h>
void main()
{
int A=20, B=10, C=4, D=8, E=6, F=4, G=12;
int i=10, J;
printf("a. A+B*C+(D*E)+F*G = %d\n", A+B*C+(D*E)+F*G);
printf("b. A/B*C-B+A*D/3 = %d\n", A/B*C-B+A*D/3);
printf("c. A+++B---A = %d\n",  A+++B---A);
i = 5;
J = (i++) + (++i);
printf("d. J = (i++) + (++i) = %d\n", J);
}