#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int main()
{
    int a,b;
    int result = 1;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        result = gcd(a,b);
        printf("%d\n",result);
    }
    return 0;
}

int gcd(int a, int b)
{
    int tmp;
    while(a % b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return b;
}
