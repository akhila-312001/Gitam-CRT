#include<stdio.h>
int main()
{
	int x;
	printf("enter a value:");
	scanf("%d",&x);
	if (x%3==0 && x%5==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
