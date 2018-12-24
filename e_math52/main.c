#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 7
int main()
{
    int i;
    long long int perfect_num[MAX_SIZE] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
    long long int input;

    while(scanf("%lld", &input) != EOF)
    {
        for(i = 0; i < MAX_SIZE; i++)
        {
            if(input > perfect_num[i])
                printf("%lld\n", perfect_num[i]);
        }
    }

    return 0;
}
