#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    float result;
    while(scanf("%f%f%f",&x,&y,&z)!=EOF)
    {
        result = ((x + y)*z)/2;
        printf("Trapezoid area:%.1f\n",result);
    }
    return 0;
}
