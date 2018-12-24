#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int tmp = 0;
    int max = 0;

    while(scanf("%d", &input) != EOF)
    {
        tmp += input;

        if(max < tmp)
            max = tmp;

        if(tmp < 0)
            tmp = 0;
    }

    printf("%d\n", max);

    return 0;
}
