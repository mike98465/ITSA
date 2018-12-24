#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int  num;
    long int result = 1;
    int i = 0;
    while(scanf("%ld",&num) != EOF)
    {
        if(num > 31)
        {
            printf("Value of more than 31\n");
            continue;
        }
        for(i = 0; i < num; i++)
        {
            result *= 2;
        }
        printf("%ld\n",result);
        result = 1;
    }
    return 0;
}
