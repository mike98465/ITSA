#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price;
    int ten,five = 0;
    while(scanf("%d",&price) != EOF)
    {
        ten = price / 10;
        printf("NT10=%d\n",ten);
        price -= ten*10;

        five = price / 5;
        printf("NT5=%d\n",five);
        price -= five*5;

        printf("NT1=%d\n",price);

        ten = 0;
        five = 0;

    }
    return 0;
}
