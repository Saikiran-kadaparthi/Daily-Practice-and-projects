//Simple Interest
#include <stdio.h>

int main()
{
    float s, r, p, t;
    
	printf("Enter principal amount : ");
    scanf("%f", &p);

    printf("Enter rate of interest : ");
    scanf("%f", &r);

    printf("Enter time period : ");
    scanf("%f", &t);


    s = (p * t * r) / 100;
    printf("%f", s);
    
    return 0;
}

