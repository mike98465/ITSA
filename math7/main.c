#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num;
    while(scanf("%ld",&num)!=EOF)
    {
        printf("%ld %ld %ld\n",num,num*num,num*num*num);
    }
    return 0;
}
