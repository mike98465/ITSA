#include<stdio.h>
int count = 0;
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
		count++;
	else
	{
		hanoi(n-1,a,c,b);
		count++;
		hanoi(n-1,b,a,c);
	}
}

int main()
{
	int n;
	//printf("input number of disks:\n");
	while(scanf("%d",&n) != EOF)
    {
       	char a='A',b='B',c='C';
        hanoi(n,a,b,c);
        printf("%d\n",count);
        count = 0;
    }
}
