#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double hip, height, BAI;

    while(scanf("%lf %lf", &hip, &height) != EOF)
    {
        BAI = hip/pow(height, 1.5)-18;

        if(BAI > 40)
            printf("morbidly obese\n");
        else if(BAI >= 30)
            printf("obese\n");
        else if(BAI >= 25)
            printf("overweight\n");
        else if(BAI >= 18.5)
            printf("healthy\n");
        else
            printf("underweight\n");
    }

    return 0;
}
