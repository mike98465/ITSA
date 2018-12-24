#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6]={0};
    int i = 0;

    for(i = 0; i < 6; i++)
        scanf("%d",&arr[i]);

    for(i = 5; i >= 0; i--)
    {
        if(i == 0)
            printf("%d\n",arr[i]);
        else
            printf("%d ",arr[i]);
    }

    return 0;
}
