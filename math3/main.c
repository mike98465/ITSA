#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int result;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        result = x + y;
        printf("%d\n",result);
    }
    return 0;
}

