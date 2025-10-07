//2. Compound Interest (rounded to nearest integer)
#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, t, a, ci;

    printf("Enter Principal Amount : ");
    scanf("%lf", &p);

    printf("Enter Annual Interest Rate : ");
    scanf("%lf", &r);

    printf("Enter Time Period : ");
    scanf("%lf", &t);

    r = r / 100;
    a = p * pow((1 + r), t);
    ci = a - p;

    printf("Compound interest: %lf", ci);

    return 0;
}
