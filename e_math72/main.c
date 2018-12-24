#include<stdio.h>
int main(void)
{
    int id;
    int units_sold;
    float cost;
    while(scanf("%d%d%f",&id,&units_sold,&cost) != EOF)
    {
        printf("%d %d %.2f %.2f %.2f\n",id,units_sold,cost,
               units_sold*cost,units_sold*cost*0.12);
    }
    return 0;
}
