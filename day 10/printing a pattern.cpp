#include<stdio.h>
int main()
{
	int x,r,i;
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		printf("$");
		for(i=0;i<r;i++)
		{
			printf("*");
		}
		printf("\n");
		x/=10;
	}
	return 0;
}
