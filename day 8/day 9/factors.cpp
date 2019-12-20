#include<stdio.h>
int main()
{
	int n,fact=1;
	scanf("%d",&n);
	if(fact!=n)
	{
		if(n%fact==0)
		{
			printf("%d",fact);
		}
		fact++;
			}
	return 0;
}
