#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool test(long long total, long long  alligator_legs, long long bat_eyese, long long cat_skulls,
             long long power_A, long long power_B, long long power_C)
{
    long long  i, j, k;

    for(i = 0; i <= alligator_legs; i++)
    {
        for(j = 0; j <= bat_eyese; j++)
        {
            for(k = 0; k <= cat_skulls; k++)
            {
                if(power_A*i + power_B*j + power_C*k == total)
                    return true;
            }
        }
    }

    return false;
}

int main()
{
    long long  n;
    long long  alligator_legs, bat_eyes, cat_skulls;
    long long  power_A, power_B, power_C, total;
    bool ans;

    scanf("%lld", &n);

    while(n--)
    {
        scanf("%lld%lld%lld%lld%lld%lld%lld", &total, &alligator_legs, &bat_eyes,
              &cat_skulls, &power_A, &power_B, &power_C);

        ans = test(total, alligator_legs, bat_eyes, cat_skulls, power_A, power_B, power_C);

        if(ans)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
