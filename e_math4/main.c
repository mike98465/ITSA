#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 7
int main()
{
    long long perfectNum[MAX_SIZE] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
    long long num;
    int n;
    int i, flag = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lld", &num);
        for(i = 0 ; i < MAX_SIZE; i++)
        {
            if(num == perfectNum[i])
                flag = 1;
        }
        if(flag)
            printf("perfect\n");
        else
            printf("nonperfect\n");
        flag = 0;
    }
    return 0;
}
