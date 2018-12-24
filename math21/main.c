#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    long long int result = 1;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 1; i <= n; i++)
        {
            result *= i;
        }
        printf("%lld\n",result);
        result = 1;
    }
    return 0;
}
