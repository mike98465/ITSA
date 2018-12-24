#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int start = 0,finish = 0,sum = 0;
    int i;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        if(a >= b)
        {
            start = b;
            finish = a;
        }
        else
        {
            start = a;
            finish = b;
        }
        for(i = start; i <= finish; i++)
        {
            sum += i;
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
