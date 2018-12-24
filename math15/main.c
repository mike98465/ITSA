#include <stdio.h>
#include <stdlib.h>
#define LENGTH 100

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        if(a > LENGTH || b > LENGTH)
        {
            printf("outside\n");
        }
        else
            printf("inside\n");
    }
    return 0;
}
