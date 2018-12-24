#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    float result;
    while(scanf("%f%f",&x,&y)!=EOF)
    {
        result = (x*y)/2;
        printf("%.1f\n",result);
    }
    return 0;
}
