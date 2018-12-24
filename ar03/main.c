#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6]={0};
    long int result = 0;

    while(scanf("%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5])!=EOF)
    {
        result = arr[0]*arr[0]*arr[0] + arr[1]*arr[1]*arr[1] + arr[2]*arr[2]*arr[2] +
                 arr[3]*arr[3]*arr[3] + arr[4]*arr[4]*arr[4] + arr[5]*arr[5]*arr[5];
        printf("%ld\n",result);
    }

    return 0;
}
