#include <stdio.h>

int main()
{
    float input;
    scanf("%f",&input);
    printf("Fahrenheit = %.2f\n",(input+40.0)*1.8-40.0);
    printf("Absolute temperature = %.2f\n",input+273.15);
    return 0;
}
