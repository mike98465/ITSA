#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    while(scanf("%lf",&x) != EOF)
    {
        y = (x*9)/5 + 32;
        y = ((y * 100) + 0.5)/100;
        printf("%.1lf\n",y);
    }
    return 0;
}
