#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int m,n;
    int student;
    int boys = 0, girls = 0;

    while(scanf("%d%d", &m, &n) != EOF)
    {
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                scanf("%d",&student);

                if(student == 0)
                    girls++;
                else if(student == 1)
                    boys++;
            }
            //for '\n'
            getchar();
        }

        if(girls > boys)
            printf("0\n");
        else if(boys > girls)
            printf("1\n");
        else
            printf("2\n");
    }

    return 0;
}
