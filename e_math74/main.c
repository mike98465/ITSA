#include<stdio.h>

int main(void)
{
    int start,end;
    int i;
    int sum = 0;
    while(scanf("%d%d",&start,&end) != EOF)
    {
        for(i = start; i <= end; i++)
        {
            if(i % 2 == 1)
                sum += i;
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
