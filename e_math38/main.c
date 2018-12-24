#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,den1,num2,den2;
    int ans_n,ans_d;
    int tmp1;
    int tmp2;
    int tmp3;

    while(scanf("%d/%d",&num1,&den1) != EOF)
    {
        scanf("%d/%d",&num2,&den2);
        if (num1 == 0 && den1 == 0 && num2 == 0 && den2 == 0)
            continue;

        ans_n = num1 * den2 + num2 * den1;
        ans_d = den1 * den2;

        tmp1 = ans_n;
        tmp2 = ans_d;
        if(ans_n >= ans_d)
        {
            while(ans_d != 0)
            {
                tmp3 = ans_n % ans_d;
                ans_n = ans_d;
                ans_d = tmp3;
            }
            printf("%d/%d\n",tmp1/ans_n,tmp2/ans_n);
        }
        else if(ans_d >= ans_n)
        {
            while(ans_n != 0)
            {
                tmp3 = ans_d % ans_n;
                ans_d = ans_n;
                ans_n = tmp3;
            }
            printf("%d/%d\n",tmp1/ans_d,tmp2/ans_d);
        }
    }

    return 0;
}
