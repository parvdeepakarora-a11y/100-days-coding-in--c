#include <stdio.h>
#include <math.h>
int main()
{double principal, rate, time;
double simple_interest, compound_interest;
scanf("%lf %lf %lf", &principal, &rate, &time);
simple_interest = (principal * rate * time) / 100.0;
compound_interest = principal * (pow(1.0 + (rate / 100.0), time) - 1.0);
printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);
return 0;}
