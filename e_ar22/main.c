#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int main(void)
{
    char line[MAX_SIZE];
    char ans[MAX_SIZE]={'\0'};
    int i=0;
    int length = 0;

    while(fgets(line,MAX_SIZE,stdin))
    {
        line[strlen(line)-1]='\0';
        for(i = 0; line[i] != '\0'; i++)
        {
            ans[i] = line[i] - 3;
            length++;
        }
        printf("%s\n",ans);

        //set to zero
        for(i = 0; i < length; i++)
            ans[i] = '\0';
        length = 0;
    }
    return 0;
}
