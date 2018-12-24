#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y) != EOF)
    {
        if(sqrt(x*x + y*y) > 100)
            printf("outside\n");
        else
            printf("inside\n");
    }
    return 0;
}
