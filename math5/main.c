#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    while(scanf("%lf",&x) != EOF)
        printf("%.1lf\n",((x*x)*100 + 0.5)/100.0);
    return 0;
}
