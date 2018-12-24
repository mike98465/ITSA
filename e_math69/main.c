#include<stdio.h>
int main()
{
    float height,weight,BMI;
    while(scanf("%f%f",&height,&weight) != EOF)
    {
        height = height * 0.01;
        BMI = weight / (height * height);
        printf("%.1f ",BMI);
        if(BMI < 18.5)
            printf("underweight\n");
        else if(18.5 <= BMI && BMI < 24)
            printf("normal\n");
        else if(24 <= BMI && BMI < 27)
            printf("overweight\n");
        else if(27 <= BMI && BMI < 30)
            printf("mild obesity\n");
        else if(30 <= BMI && BMI < 35)
            printf("moderate obesity\n");
        else
            printf("severe obesity\n");
    }
    return 0;
}
