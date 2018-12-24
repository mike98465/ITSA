#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double result;
    while(scanf("%d",&x) != EOF)
    {
        result = 1.6*x;
        printf("%.1lf\n",(result*100 + 0.5)/100.0);
    }

    return 0;
}

