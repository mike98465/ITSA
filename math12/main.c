#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dist;
    int sec;
    while(scanf("%d",&dist) != EOF)
    {
        sec = dist/(1 - 0.01*30*2.54);
        if(dist - sec*(1 - 0.01*30*2.54) != 0)
            sec++;
        printf("%d\n",sec);
    }
    return 0;
}
